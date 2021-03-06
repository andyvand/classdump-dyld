/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABActionManager;

@interface ABActionMenuItemFactory : NSObject {

	ABActionManager* _actionManager;

}
-(id)initWithActionManager:(id)arg1 ;
-(id)actionMenuItemsForPersonUniqueId:(id)arg1 property:(id)arg2 identifier:(id)arg3 value:(id)arg4 ;
-(id)relatedNamesActionsForPerson:(id)arg1 identifier:(id)arg2 ;
-(id)instantMessageServicePropertyActionsForPerson:(id)arg1 identifier:(id)arg2 ;
-(id)linkedPeopleActionsForPerson:(id)arg1 identifier:(id)arg2 value:(id)arg3 ;
-(id)actionMenuItemsForPersonUniqueId:(id)arg1 inAddressBook:(id)arg2 property:(id)arg3 identifier:(id)arg4 value:(id)arg5 ;
-(id)actionsForPerson:(id)arg1 property:(id)arg2 identifier:(id)arg3 value:(id)arg4 ;
-(id)menuItemForActionResponder:(id)arg1 person:(id)arg2 identifier:(id)arg3 ;
-(id)actionMenuItemsForPersonUniqueId:(id)arg1 inAddressBook:(id)arg2 property:(id)arg3 identifier:(id)arg4 ;
-(void)dealloc;
@end

