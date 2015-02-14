/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/CNContactListSelectHelper.h>

@protocol CNContactPickerInternalResponseDelegate;
@class CNContactListValueHelperScope, NSString;

@interface CNContactListSelectValueHelper : NSObject <CNContactListSelectHelper> {

	id<CNContactPickerInternalResponseDelegate> _delegate;
	CNContactListValueHelperScope* _scope;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDelegate:(id)arg1 scope:(id)arg2 ;
-(void)performSelect;
-(id)value;
@end

