int faz_conta_direito(int parcelas, char op)
{

    int input, output = 0;

    for (int i = 0; i < parcelas; i++)
    {
        if (op == '+')
        {
            scanf("%d", &input);
            output = output + input;
        }

        if (op == '-')
        {

            if (i == 0)
            {
                scanf("%d", &input);
                output = input;
            }
            else
            {
                scanf("%d", &input);
                output = output - input;
            }
        }
    }

    return output;
}