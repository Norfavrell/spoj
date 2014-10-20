//g++ 4.cpp -o test && ./test < input.in
#include <stdio.h>
#include <string.h>
#include <stack>
#include <map>

#ifdef DEBUG
#include <vector>
#endif

#define _PRINT printf("   Output: "); for(int j=0;j<output.size();j++) printf("%c ",output[j]); printf("\n   Stack: ");  std::stack<char> stack2; while(!stack.empty()){ char tmp=stack.top(); stack.pop(); stack2.push(tmp); printf("%c ",tmp); } while(!stack2.empty()){ stack.push(stack2.top()); stack2.pop(); } printf("\n");

int main(){
	std::map<char,char> ops;
	ops['+']='-';
	ops['-']='+';
	ops['*']='/';
	ops['/']='*';
	ops['^']='.';//not used
	int T;
	scanf("%d",&T);
	while(T--){
		char data[400];
		scanf("%s",data);
		std::stack<char> stack; stack.push(' ');
		#ifdef DEBUG
		std::vector<char> output;
		printf("Input: %s\n",data);
		#endif
		for(int i=0;i<strlen(data);i++){
			#ifdef DEBUG
			printf("Read: %c\n",data[i]);
			#endif
			if(data[i]>='a' and data[i]<='z'){
				#ifdef DEBUG
				printf("  Add `%c` to output\n",data[i]);
				output.push_back(data[i]);
				_PRINT
				#else
				printf("%c",data[i]);
				#endif
			} else if(data[i]=='('){
				stack.push(data[i]);
				#ifdef DEBUG
				printf("  Add `%c` to stack\n",data[i]);
				_PRINT
				#endif
			} else if(data[i]==')'){
				#ifdef DEBUG
				printf("  Take ");
				#endif
				while(stack.top()!='('){
					#ifdef DEBUG
					printf("`%c` ",stack.top());
					output.push_back(stack.top());
					#else
					printf("%c",stack.top());
					#endif
					stack.pop();
				}
				#ifdef DEBUG
				printf("`(` ");
				stack.pop();
				printf("and add it to output.\n");
				_PRINT
				#else
				stack.pop();
				#endif
			} else {
				#ifdef DEBUG
				printf("  Take ");
				#endif
				while(stack.top()==ops[data[i]]){
					#ifdef DEBUG
					printf("`%c` ",stack.top());
					output.push_back(stack.top());
					#else
					printf("%c",stack.top());
					#endif
					stack.pop();
				}
				#ifdef DEBUG
				printf("and add it to output.\n Add `%c` to stack.\n",data[i]);
				_PRINT
				#endif
				stack.push(data[i]);
			}
			#ifdef DEBUG
			printf("--------------------------\n");
			#endif
		}
		#ifdef DEBUG
		printf("Print remaining stack to the output.\n  Take ");
		#endif
		while(!stack.empty()){
			if(stack.top()==' '){ stack.pop(); continue; }
			#ifdef DEBUG
			printf("`%c` ",stack.top());
			output.push_back(stack.top());
			#else
			printf("%c",stack.top());
			#endif
			stack.pop();
		}
		#ifdef DEBUG
		printf("and add it to the output.");
		_PRINT
		printf("=================================\n=================================\n=================================\n");
		#else
		printf("\n");
		#endif
	}
};
