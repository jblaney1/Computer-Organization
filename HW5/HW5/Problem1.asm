		.model flat,c
		.code

; 	extern "C" int problem1_(int a, int b, int c);

problem1_ proc
			push ebp
			mov ebp, esp

			mov eax,[ebp+8]
			mov ecx,[ebp+12]
			mov edx,[ebp+16]

			cmp eax,ecx
			jnl elseLarge
			add eax,1
			jmp probEnd

elseLarge:	sub eax,ecx

probEnd:	pop ebp
			ret
problem1_ endp
		end