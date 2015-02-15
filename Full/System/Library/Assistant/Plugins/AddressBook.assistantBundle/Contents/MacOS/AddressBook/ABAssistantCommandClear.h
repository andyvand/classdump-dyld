/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:54:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Assistant/Plugins/AddressBook.assistantBundle/Contents/MacOS/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AFDomainObjectClearing.h>
#import <AddressBook/ABAssistantCommand.h>

@class NSString, ABAddressBook, CNContactStore;

@interface ABAssistantCommandClear : NSObject <AFDomainObjectClearing, ABAssistantCommand>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) ABAddressBook * addressBook; 
@property (nonatomic,retain) CNContactStore * contactStore; 
-(void)clearAceDomainObjects;
-(void)dealloc;
@end

