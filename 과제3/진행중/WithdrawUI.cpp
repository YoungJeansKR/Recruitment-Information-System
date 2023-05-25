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
    file->ofs << "1.2. È¸¿øÅ»Åð" << '\n';
    file->ofs << "> " << result << " " << "\n" << "\n";
}