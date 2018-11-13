		.model flat,c
		.code

;	extern "C" int problem3_(int a, int b, int c);

problem3_ proc
			push ebp
			mov ebp, esp

			mov eax,[ebp+8]
			mov ecx,[ebp+12]
			mov edx,[ebp+16]

			cmp eax,0
			jae checkB
			jmp ifThen

checkB:		cmp ecx,2
			jle ifThen
			jmp probEnd

ifThen:		add ecx,5

probEnd:	mov eax,ecx
			pop ebp
			ret
problem3_ endp
		end