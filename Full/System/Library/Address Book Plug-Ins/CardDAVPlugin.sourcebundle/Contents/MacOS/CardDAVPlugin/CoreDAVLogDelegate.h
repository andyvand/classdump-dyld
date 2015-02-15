/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:54:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Address Book Plug-Ins/CardDAVPlugin.sourcebundle/Contents/MacOS/CardDAVPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CoreDAVLogDelegate <NSObject>
@optional
-(void)coreDAVLogRequestBody:(id)arg1;
-(void)coreDAVLogResponseBody:(id)arg1;

@required
-(long long)coreDAVLogLevel;
-(long long)coreDAVOutputLevel;
-(void)coreDAVLogDiagnosticMessage:(id)arg1 atLevel:(long long)arg2;
-(char)shouldLogTransmittedData;
-(void)coreDAVLogTransmittedDataPartial:(id)arg1;
-(void)coreDAVTransmittedDataFinished;

@end

