/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:06 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMTransferServices.framework/IMTransferServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface IMTransferServicesController : NSObject
+(id)sharedInstance;
-(void)receiveFileTransfer:(id)arg1 path:(id)arg2 requestURLString:(id)arg3 ownerID:(id)arg4 signature:(id)arg5 decryptionKey:(id)arg6 fileSize:(unsigned long long)arg7 progressBlock:(/*^block*/ id)arg8 completionBlock:(/*^block*/ id)arg9 ;
-(void)sendFilePath:(id)arg1 transferID:(id)arg2 encryptFile:(BOOL)arg3 progressBlock:(/*^block*/ id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(void)_sendFilePath:(id)arg1 transferID:(id)arg2 encryptFile:(BOOL)arg3 retries:(int)arg4 progressBlock:(/*^block*/ id)arg5 completionBlock:(/*^block*/ id)arg6 ;
-(void)_receiveFileTransfer:(id)arg1 path:(id)arg2 requestURLString:(id)arg3 ownerID:(id)arg4 signature:(id)arg5 decryptionKey:(id)arg6 retries:(int)arg7 fileSize:(unsigned long long)arg8 progressBlock:(/*^block*/ id)arg9 completionBlock:(/*^block*/ id)arg10 ;
@end
