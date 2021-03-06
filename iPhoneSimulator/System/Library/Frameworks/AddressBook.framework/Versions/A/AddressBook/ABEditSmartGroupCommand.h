/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABCommand.h>

@class ABSmartGroup, ABSearchElement, NSString;

@interface ABEditSmartGroupCommand : ABCommand {

	ABSmartGroup* _group;
	ABSearchElement* _element;
	NSString* _name;
	char _hilights;

}
-(void)undoIt;
-(void)redoIt;
-(char)doIt;
-(void)_swap;
-(id)initWithSmartGroup:(id)arg1 name:(id)arg2 searchElement:(id)arg3 hilights:(char)arg4 addressBook:(id)arg5 ;
-(void)finalize;
-(void)dealloc;
@end

