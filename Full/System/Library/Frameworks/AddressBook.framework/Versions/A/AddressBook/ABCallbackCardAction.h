/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/ABActionDelegate.h>

@class NSString;

@interface ABCallbackCardAction : NSObject <ABActionDelegate> {

	SCD_Struct_AB14* _callbacks;

}

@property (readonly) NSString * actionProperty; 
-(void)performActionForPerson:(id)arg1 identifier:(id)arg2 ;
-(char)shouldEnableActionForPerson:(id)arg1 identifier:(id)arg2 ;
-(NSString *)actionProperty;
-(id)titleForPerson:(id)arg1 identifier:(id)arg2 ;
-(id)initWithCallbacks:(SCD_Struct_AB14*)arg1 ;
@end

