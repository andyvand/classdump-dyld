/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/MacOS/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/__BKPlatformPopoverAccessibility_super.h>

@interface BKPlatformPopoverAccessibility : __BKPlatformPopoverAccessibility_super {

	char _bkaxIsCloseDisabled;

}

@property (assign,setter=bkaxSetCloseDisabled:,nonatomic) char bkaxIsCloseDisabled;              //@synthesize bkaxIsCloseDisabled=_bkaxIsCloseDisabled - In the implementation block
+(id)bkaxTargetClassName;
+(Class)bkaxBaseSafeCategoryClass;
-(void)bkaxPerformBlockPreventingPopoverClosing:(/*^block*/id)arg1 ;
-(char)bkaxDisableClose;
-(char)bkaxIsCloseDisabled;
-(void)bkaxSetCloseDisabled:(char)arg1 ;
-(void)bkaxSetDisableClose:(char)arg1 ;
-(void)close;
@end

