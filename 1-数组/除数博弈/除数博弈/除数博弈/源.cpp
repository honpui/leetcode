bool divisorGame(int N){
	if (N & 0x1)
	{
		return false;
	}
	else
	{
		return true;
	}

}


/* 推导过程 */

可以先写前面几个出来，看看有没有必赢的方法

1  必输
2 必赢
3 必输
4 必赢
5 必输
6 必赢
7 必输
8 必赢


9的时候，除数只有1和3，当选择1时，对方拿了8，则对方必赢；如果选择了3，则对方拿了6，对方也是必赢；则我们必输。