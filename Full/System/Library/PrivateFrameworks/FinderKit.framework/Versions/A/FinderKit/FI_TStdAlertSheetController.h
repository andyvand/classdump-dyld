/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FinderKit/FinderKit-Structs.h>
@interface FI_TStdAlertSheetController : NSObject {

	TNSRef<id<TStdAlertSheetClientProtocol> > _client;

}
+(void)stdAlertSheetWithClient:(id)arg1 parentWindow:(id)arg2 mainText:(id)arg3 subText:(id)arg4 okStr:(id)arg5 cancelStr:(id)arg6 otherStr:(id)arg7 alertStyle:(unsigned long long)arg8 defaultButton:(int)arg9 ;
-(void)alertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
@end

