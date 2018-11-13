		.model flat,c
		.code

;	extern "C" int problem2_(int a, int b, int c, int val);

problem2_ proc
			push ebp
			mov ebp, esp

			mov ebx,[ebp+8]
			mov ecx,[ebp+16]

elseLarge:	cmp ebx,1
			jge	elseLess
			jmp probEnd

elseLess:	mov eax,ebx
			cdq
			idiv dword ptr [ebp + 20]
			dec ebx			
			cmp edx,0
			jnz elseLarge

elseMod:	add ecx,[ebp + 12]
			jmp elseLarge

probEnd:	mov eax,ecx
			pop ebp
			ret
problem2_ endp
		end