/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct _AMWorkflowControllerDelegateRespondTo {
	unsigned workflowControllerDidAddWorkflow : 1;
	unsigned workflowControllerDidRemoveWorkflow : 1;
	unsigned workflowControllerWillRun : 1;
	unsigned workflowControllerWillStep : 1;
	unsigned workflowControllerWillStop : 1;
	unsigned workflowControllerWillPause : 1;
	unsigned workflowControllerDidRun : 1;
	unsigned workflowControllerDidStep : 1;
	unsigned workflowControllerDidStop : 1;
	unsigned workflowControllerDidPause : 1;
	unsigned workflowControllerWillRunAction : 1;
	unsigned workflowControllerDidRunAction : 1;
	unsigned workflowControllerDidError : 1;
	unsigned workflowControllerDidLogMessageOfTypeFromAction : 1;
	unsigned workflowControllerWillRunConversion : 1;
	unsigned workflowControllerDidRunConversion : 1;
	unsigned workflowControllerDidResumeWithAction : 1;
	unsigned reserved : 19;
} AMWorkflowControllerDelegateRespondTo;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct _AMWorkflowRunnerDelegateRespondTo {
	unsigned workflowRunnerWillRun : 1;
	unsigned workflowRunnerWillStep : 1;
	unsigned workflowRunnerWillStop : 1;
	unsigned workflowRunnerWillPause : 1;
	unsigned workflowRunnerDidRun : 1;
	unsigned workflowRunnerDidStep : 1;
	unsigned workflowRunnerDidStop : 1;
	unsigned workflowRunnerDidPause : 1;
	unsigned workflowRunnerWillRunAction : 1;
	unsigned workflowRunnerWillRunActionWithUUID : 1;
	unsigned workflowRunnerDidRunAction : 1;
	unsigned workflowRunnerDidRunActionWithUUID : 1;
	unsigned workflowRunnerDidError : 1;
	unsigned workflowRunnerDidLogMessageOfTypeFromAction : 1;
	unsigned workflowRunnerWillRunConversion : 1;
	unsigned workflowRunnerDidRunConversion : 1;
	unsigned workflowRunnerDidFinish : 1;
	unsigned workflowRunnerDidResumeWithAction : 1;
	unsigned workflowRunnerProgressDidChangeForAction : 1;
	unsigned reserved : 17;
} AMWorkflowRunnerDelegateRespondTo;

typedef struct _AMWorkflowRunnerOwnerRespondTo {
	unsigned workflowRunnerWillRun : 1;
	unsigned workflowRunnerWillStep : 1;
	unsigned workflowRunnerWillStop : 1;
	unsigned workflowRunnerWillPause : 1;
	unsigned workflowRunnerDidRun : 1;
	unsigned workflowRunnerDidStep : 1;
	unsigned workflowRunnerDidStop : 1;
	unsigned workflowRunnerDidPause : 1;
	unsigned workflowRunnerWillRunAction : 1;
	unsigned workflowRunnerDidRunAction : 1;
	unsigned workflowRunnerDidError : 1;
	unsigned workflowRunnerDidLogMessageOfTypeFromAction : 1;
	unsigned workflowRunnerDidFinish : 1;
	unsigned workflowRunnerDidResumeWithAction : 1;
	unsigned workflowRunnerProgressDidChangeForAction : 1;
	unsigned reserved : 21;
} AMWorkflowRunnerOwnerRespondTo;

typedef struct AuthorizationOpaqueRef* AuthorizationOpaqueRefRef;

typedef struct _AMRunnerInterfaceDelegateRespondTo {
	unsigned delegateUUID : 1;
	unsigned runnerDied : 1;
	unsigned setRunner : 1;
	unsigned nullifyRunner : 1;
	unsigned stopWithError : 1;
	unsigned workflow : 1;
	unsigned reserved : 25;
} AMRunnerInterfaceDelegateRespondTo;

typedef struct CGPath* CGPathRef;

typedef struct CGLayer* CGLayerRef;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct dispatch_semaphore_s* dispatch_semaphore_sRef;

typedef struct {
	id field1;
	id field2;
	id field3;
} SCD_Struct_AM13;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct __CFString* CFStringRef;

typedef struct dispatch_queue_s* dispatch_queue_sRef;

