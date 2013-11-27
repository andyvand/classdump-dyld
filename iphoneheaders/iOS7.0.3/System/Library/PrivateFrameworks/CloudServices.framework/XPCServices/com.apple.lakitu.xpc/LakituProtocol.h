/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:41:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/XPCServices/com.apple.lakitu.xpc/com.apple.lakitu
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol LakituProtocol <NSObject>
@required
-(void)getAccountInfoWithInfo:(id)arg1 reply:(/*^block*/ id)arg2;
-(void)changeSMSTargetWithInfo:(id)arg1 reply:(/*^block*/ id)arg2;
-(void)startSMSChallengeWithInfo:(id)arg1 reply:(/*^block*/ id)arg2;
-(void)storeRecordWithInfo:(id)arg1 reply:(/*^block*/ id)arg2;
-(void)recoverRecordWithInfo:(id)arg1 reply:(/*^block*/ id)arg2;
-(void)updateRecordWithInfo:(id)arg1 reply:(/*^block*/ id)arg2;
-(void)deleteRecordWithInfo:(id)arg1 reply:(/*^block*/ id)arg2;
-(void)listSMSTargetsWithInfo:(id)arg1 reply:(/*^block*/ id)arg2;
-(void)verifyCertificateWithInfo:(id)arg1 reply:(/*^block*/ id)arg2;
@end
