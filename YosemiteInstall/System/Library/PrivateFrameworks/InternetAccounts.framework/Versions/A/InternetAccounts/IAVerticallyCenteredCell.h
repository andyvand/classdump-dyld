/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:52:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <InternetAccounts/InternetAccounts-Structs.h>
#import <AppKit/NSCell.h>

@interface IAVerticallyCenteredCell : NSCell {

	char _verticallyCentered;

}

@property (assign) char verticallyCentered;              //@synthesize verticallyCentered=_verticallyCentered - In the implementation block
-(CGRect)adjustFrameToVerticallyCenterText:(CGRect)arg1 ;
-(char)verticallyCentered;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)setVerticallyCentered:(char)arg1 ;
@end
