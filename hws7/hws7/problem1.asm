		.model flat,c
		.code

; 	extern "C" int problem1_(int a);

problem1_ proc
			push ebp
			mov ebp,esp

			mov eax,[ebp+8]
			mov ebx,4
			mov ecx,5

			imul ebx
			cdq
			idiv ecx
			add eax,[ebp + 8]
			add eax,32

			pop ebp
			ret
problem1_ endp
		end