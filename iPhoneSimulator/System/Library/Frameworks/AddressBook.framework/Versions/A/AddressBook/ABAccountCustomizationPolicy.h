/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABAccountCustomizationPolicy <NSObject>
@required
-(char)groupsCanRemoveMembers;
-(char)supportsDistributionLists;
-(id)allContactsLabelForAccountName:(id)arg1;
-(id)directoryLabelForAccountName:(id)arg1;
-(char)showAllContactsIfOnlyOneGroup;
-(char)canBecomeDefaultAccount;
-(char)canReimportFromMetadata;
-(char)usesSyncServices;
-(char)supportsPhoneticName;
-(char)supportsPhotos;
-(id)defaultAccountDescription;
-(long long)sortOrder;

@end

