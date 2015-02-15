/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABActionDelegate.h>

@class NSString;

@interface ABActionSocialProfile : NSObject <ABActionDelegate>

@property (readonly) NSString * actionProperty; 
-(void)performActionForPerson:(id)arg1 identifier:(id)arg2 ;
-(char)shouldEnableActionForPerson:(id)arg1 identifier:(id)arg2 ;
-(NSString *)actionProperty;
-(id)titleForPerson:(id)arg1 identifier:(id)arg2 ;
-(id)_actionURLForProfile:(id)arg1 ;
-(id)_localizationStringKeyForProfile:(id)arg1 ;
-(id)_standardURLForProfile:(id)arg1 ;
@end

