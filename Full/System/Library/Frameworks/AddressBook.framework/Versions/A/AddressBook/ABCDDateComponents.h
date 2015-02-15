/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABCDOwnedObject.h>

@class NSString, NSManagedObject;

@interface ABCDDateComponents : ABCDOwnedObject

@property (assign) long long day; 
@property (assign) long long month; 
@property (assign) long long year; 
@property (assign) long long era; 
@property (assign) char isLeapMonth; 
@property (copy) NSString * calendarIdentifier; 
@property (nonatomic,retain) NSManagedObject * owner; 
@property (nonatomic,retain) NSManagedObject * contact; 
-(char)abHasAddressBookRelatedContent;
-(id)components;
-(void)setOwner:(NSManagedObject *)arg1 ;
-(NSManagedObject *)owner;
-(void)setComponents:(id)arg1 ;
@end

