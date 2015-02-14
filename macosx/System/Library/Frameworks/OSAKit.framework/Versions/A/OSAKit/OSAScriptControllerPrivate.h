/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/OSAKit.framework/Versions/A/OSAKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class OSAScript, OSALanguage, NSAppleEventDescriptor, NSUndoManager;

@interface OSAScriptControllerPrivate : NSObject {

	OSAScript* _script;
	OSALanguage* _language;
	NSAppleEventDescriptor* _defaultTarget;
	long long _scriptState;
	NSUndoManager* _undoManager;
	char _shouldCancelExecution;
	char _isCompiling;

}
-(id)init;
-(void)dealloc;
@end

