/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Collaboration.framework/Versions/A/Collaboration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Collaboration/Collaboration-Structs.h>
#import <Collaboration/NSTableViewDataSource.h>

@class NSMutableArray, NSArray, NSString;

@interface SidebarDataSource : NSObject <NSTableViewDataSource> {

	NSMutableArray* _sidebarItems;
	unsigned long long _usersGroupsState;
	char _showsNetworkUsers;
	char _showsNetworkGroups;
	char _showsAddressBook;
	char _showsAddressBookGroups;
	NSArray* _addressBookGroups;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setShowsNetworkUsers:(char)arg1 ;
-(char)showsNetworkUsers;
-(void)setShowsNetworkGroups:(char)arg1 ;
-(char)showsNetworkGroups;
-(void)setShowsAddressBook:(char)arg1 ;
-(char)showsAddressBook;
-(void)setShowsAddressBookGroups:(char)arg1 ;
-(char)showsAddressBookGroups;
-(char)networkDirectoryServer;
-(void)updateSidebar;
-(void)setUsersGroups:(unsigned long long)arg1 ;
-(unsigned long long)usersGroups;
-(void)setAddressBookGroups:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
@end

