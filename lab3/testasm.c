int main(){
	asm("movl $0x34f2d532,%eax");
	asm("push $0x8048e15");
	asm("mov %esp,%ebp");
	asm("add $0x2c,%ebp");
	asm("ret");
}

