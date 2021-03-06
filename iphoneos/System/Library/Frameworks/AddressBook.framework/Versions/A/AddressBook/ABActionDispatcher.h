/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:45 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSResponder.h>

@class NSMapTable;

@interface ABActionDispatcher : NSResponder {

	NSMapTable* _actionsBySelector;

}
+(void)addActionMethods;
+(id)actionNameFromFactoryName:(id)arg1 ;
+(id)selectorPointerFunctions;
+(void)initialize;
-(void)willRegisterActions;
-(void)_internalActionHandler:(id)arg1 ;
-(id)actionForSelector:(SEL)arg1 ;
-(void)registerActionForMethod:(id)arg1 ;
-(void)setAction:(id)arg1 forSelector:(SEL)arg2 ;
-(void)registerActions;
-(id)init;
-(void)dealloc;
-(char)validateMenuItem:(id)arg1 ;
@end

