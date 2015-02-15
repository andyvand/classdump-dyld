/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABCommand.h>

@class NSString, ABPerson, ABInputController;

@interface ABChangePropertyCommand : ABCommand {

	NSString* _propertyPath;
	id _oldValue;
	id _newValue;
	ABPerson* _person;
	ABInputController* _controller;

}
-(void)undoIt;
-(void)redoIt;
-(char)doIt;
-(id)initWithPerson:(id)arg1 propertyPath:(id)arg2 oldValue:(id)arg3 inputController:(id)arg4 ;
-(id)propertyPath;
-(void)setNewValue:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
@end

