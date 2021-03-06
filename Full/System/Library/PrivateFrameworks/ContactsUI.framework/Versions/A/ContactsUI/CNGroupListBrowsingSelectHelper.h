/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:01 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/ABGroupSelectHelper.h>

@class ABGroupBrowsingContext, ABPersonListSearchController, CNContactPickerView, NSString;

@interface CNGroupListBrowsingSelectHelper : NSObject <ABGroupSelectHelper> {

	ABGroupBrowsingContext* _browsingContext;
	ABPersonListSearchController* _searchController;
	CNContactPickerView* _pickerView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBrowsingContext:(id)arg1 searchController:(id)arg2 pickerView:(id)arg3 ;
-(void)performSelect;
@end

