#include "WithdrawUI.h"
#include "Withdraw.h"
#include "Member.h"
#include "File.h"

WithdrawUI::WithdrawUI()
{

}

void WithdrawUI::StartInterface()
{

}

void WithdrawUI::SelectWithdraw(Withdraw* withdraw, File* file)
{
    std::string result = withdraw->TryWithdraw();

    cout << "1.2 ȸ��Ż��" << endl;
    cout << "> " << result << endl << endl;
    file->ofs << "1.2. ȸ��Ż��" << '\n';
    file->ofs << "> " << result << " " << "\n" << "\n";
}