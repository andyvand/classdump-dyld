/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface _AMMessageTracerUtilities : NSObject
+(void)logWithDomain:(id)arg1 forAction:(id)arg2 withInput:(id)arg3 duration:(double)arg4 error:(id)arg5 workflowID:(id)arg6 executionID:(id)arg7 ;
+(void)logAMWorkflowRun;
+(void)logWorkflowRun:(id)arg1 ;
+(void)logActionRun:(id)arg1 ;
+(void)logWorkflowDuration:(double)arg1 workflowID:(id)arg2 executionID:(id)arg3 ;
+(void)logMessageForDomain:(id)arg1 signatures:(id)arg2 values:(id)arg3 result:(id)arg4 message:(id)arg5 uuid:(id)arg6 ;
+(id)identifierForAction:(id)arg1 withResult:(id)arg2 ;
+(long long)countOfInput:(id)arg1 ;
+(id)identifierForAction:(id)arg1 ;
+(void)logTimeIntervalSinceAutomatorLaunch:(double)arg1 ;
+(void)logTypes:(id)arg1 ;
+(void)loadTypesFromAction:(id)arg1 intoDictionary:(id)arg2 ;
+(void)initialize;
@end

