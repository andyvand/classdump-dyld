/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NSServicesMenuHandler : NSObject
+(char)worksWhenModal;
+(char)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 ;
+(void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
+(void)registerServicesMenuSendTypes:(id)arg1 returnTypes:(id)arg2 ;
+(void)_configureServicesMenu:(id)arg1 ;
+(id)_requestorStartingWithChain:(id)arg1 forProposedSendTypes:(id)arg2 proposedReturnTypes:(id)arg3 sendTypes:(id*)arg4 returnTypes:(id*)arg5 ;
+(id)_computeErrorForErrorCode:(long long)arg1 serviceName:(id)arg2 applicationName:(id)arg3 launchError:(int)arg4 appURL:(id)arg5 isWorkflow:(char)arg6 additionalWorkflowErrorString:(id)arg7 ;
+(long long)_runWorkflowForServiceEntry:(id)arg1 withPasteboard:(id)arg2 returnDataExpected:(char)arg3 errorString:(id*)arg4 ;
+(char)_performServiceFromEntry:(id)arg1 withPasteboard:(id)arg2 withRequestor:(id)arg3 withCarbonFocus:(void*)arg4 withSendTypes:(id)arg5 withReturnTypes:(id)arg6 canReleasePasteboardImmediately:(char*)arg7 ;
+(char)_performServiceFromEntry:(id)arg1 withPasteboard:(id)arg2 withRequestor:(id)arg3 ;
+(void)_taskDidFinish:(id)arg1 ;
+(char)_performServiceFromDictionary:(id)arg1 withPasteboard:(id)arg2 ;
@end

