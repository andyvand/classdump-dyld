/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:43:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <itunesstored/DaemonProtocolDataProvider.h>

@class ISDialogButton;

@interface RedeemCodesProtocolDataProvider : DaemonProtocolDataProvider {

	ISDialogButton* _dialogButton;

}

@property (retain) ISDialogButton * dialogButton;              //@synthesize dialogButton=_dialogButton - In the implementation block
-(void)setDialogButton:(id)arg1 ;
-(id)dialogButton;
-(void)dealloc;
-(BOOL)_runServerAuthenticationOperation:(id)arg1 error:(id*)arg2 ;
@end
