/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCoding.h>

@class NSScriptCommandDescription, NSScriptObjectSpecifier, NSDictionary, NSMutableDictionary, NSAppleEventDescriptor, NSString;

@interface NSScriptCommand : NSObject <NSCoding> {

	NSScriptCommandDescription* _commandDescription;
	id _directParameter;
	NSScriptObjectSpecifier* _receiversSpecifier;
	id _evaluatedReceivers;
	NSDictionary* _arguments;
	NSMutableDictionary* _evaluatedArguments;
	struct {
		unsigned hasEvaluatedReceivers : 1;
		unsigned hasEvaluatedArguments : 1;
		unsigned RESERVED : 30;
	}  _flags;
	id _moreVars;
	void* _reserved;

}

@property (retain,readonly) NSScriptCommandDescription * commandDescription; 
@property (retain) id directParameter; 
@property (retain) NSScriptObjectSpecifier * receiversSpecifier; 
@property (retain,readonly) id evaluatedReceivers; 
@property (copy) NSDictionary * arguments; 
@property (copy,readonly) NSDictionary * evaluatedArguments; 
@property (getter=isWellFormed,readonly) char wellFormed; 
@property (assign) int scriptErrorNumber; 
@property (retain) NSAppleEventDescriptor * scriptErrorOffendingObjectDescriptor; 
@property (retain) NSAppleEventDescriptor * scriptErrorExpectedTypeDescriptor; 
@property (copy) NSString * scriptErrorString; 
@property (copy,readonly) NSAppleEventDescriptor * appleEvent; 
+(id)currentCommand;
+(char)_getArguments:(id)arg1 withParameters:(SCD_Struct_NS15)arg2 ;
+(id)_argumentValueFromParameterDescriptor:(id)arg1 usingTypeDescription:(id)arg2 ;
+(char)_getReceiversSpecifierOrUnnamedArgument:(id*)arg1 fromEvent:(id)arg2 usingDescription:(id)arg3 ;
+(id)_commandFromEvent:(id)arg1 ;
+(id)_commandFromEvent:(id)arg1 inConstructionContext:(id)arg2 ;
-(id)_safari_subjectParameter;
-(id)_safari_subjectSpecifier;
-(id)directParameter;
-(id)performDefaultImplementation;
-(id)evaluatedReceivers;
-(NSAppleEventDescriptor *)appleEvent;
-(void)_setAppleEventHandling:(id)arg1 ;
-(void)_resumeExecutionWithResult:(id)arg1 ;
-(void)setReceiversSpecifier:(NSScriptObjectSpecifier *)arg1 ;
-(NSScriptObjectSpecifier *)receiversSpecifier;
-(void)setScriptErrorOffendingObjectDescriptor:(NSAppleEventDescriptor *)arg1 ;
-(void)_setScriptErrorExpectedType:(unsigned)arg1 ;
-(char)_allowsAccessForEventParameters:(id)arg1 givenSenderAccessGroups:(id)arg2 ;
-(id)initWithCommandDescription:(id)arg1 ;
-(char)_setAdditionalThingsFromEvent:(id)arg1 ;
-(char)isWellFormed;
-(id)evaluatedValueForArgumentValue:(id)arg1 ;
-(void)_sendToRemainingReceivers;
-(void)setDirectParameter:(id)arg1 ;
-(id)executeCommand;
-(void)setScriptErrorExpectedTypeDescriptor:(NSAppleEventDescriptor *)arg1 ;
-(NSAppleEventDescriptor *)scriptErrorOffendingObjectDescriptor;
-(NSAppleEventDescriptor *)scriptErrorExpectedTypeDescriptor;
-(NSString *)scriptErrorString;
-(void)_populateReplyAppleEventWithResult:(id)arg1 ;
-(char)_allowsAccessToSpecifier:(id)arg1 writable:(char)arg2 givenAccessGroups:(id)arg3 ;
-(char)_allowsAccessForEvent:(id)arg1 ;
-(void)_setScriptErrorOffendingObjectDescriptor:(id)arg1 ;
-(void)_setScriptErrorExpectedTypeDescriptor:(id)arg1 ;
-(id)_scriptErrorOffendingObjectDescriptor;
-(id)_scriptErrorExpectedTypeDescriptor;
-(void)_setScriptErrorFromKVCException:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)arguments;
-(NSScriptCommandDescription *)commandDescription;
-(NSDictionary *)evaluatedArguments;
-(void)setScriptErrorNumber:(int)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(int)scriptErrorNumber;
-(void)resumeExecutionWithResult:(id)arg1 ;
-(void)setScriptErrorString:(NSString *)arg1 ;
-(void)suspendExecution;
-(void)setArguments:(NSDictionary *)arg1 ;
@end

