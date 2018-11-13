		.model flat,c
		.code

; 	extern "C" int problem2_(int x, int y, int z);

problem2_ proc
			push ebp
			mov ebp,esp

			mov eax,[ebp+8]
			mov ebx,2
			mov ecx,4

			imul ebx
			adc eax,[ebp+16]
			sbb eax,[ebp+12]

			cdq
			idiv ecx

			pop ebp
			ret
problem2_ endp
		end