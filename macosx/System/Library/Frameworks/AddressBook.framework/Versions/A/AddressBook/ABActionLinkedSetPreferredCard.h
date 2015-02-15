/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface ABActionLinkedSetPreferredCard : NSObject {

	NSString* _targetUniqueId;

}

@property (copy) NSString * targetUniqueId;              //@synthesize targetUniqueId=_targetUniqueId - In the implementation block
-(void)performActionForPerson:(id)arg1 identifier:(id)arg2 ;
-(char)shouldEnableActionForPerson:(id)arg1 identifier:(id)arg2 ;
-(id)actionProperty;
-(id)titleForPerson:(id)arg1 identifier:(id)arg2 ;
-(NSString *)targetUniqueId;
-(void)setTargetUniqueId:(NSString *)arg1 ;
-(char)shouldMakeMyPerson:(id)arg1 person:(id)arg2 addressBook:(id)arg3 ;
@end
