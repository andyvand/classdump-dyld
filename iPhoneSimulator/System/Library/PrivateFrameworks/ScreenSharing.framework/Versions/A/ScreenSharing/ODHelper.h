/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:13 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ODNode, ODRecord;

@interface ODHelper : NSObject {

	ODNode* searchNode;
	ODNode* localNode;
	ODNode* directoryNode;
	ODRecord* groupRecord;

}

@property (retain) ODNode * searchNode; 
@property (retain) ODNode * localNode; 
@property (retain) ODNode * directoryNode; 
@property (retain) ODRecord * groupRecord; 
-(void)setSearchNode:(ODNode *)arg1 ;
-(ODNode *)searchNode;
-(id)openSearchNode;
-(id)recordForUID:(unsigned)arg1 ;
-(id)retrieveRecordOfType:(id)arg1 name:(id)arg2 ;
-(char)nodeIsLocal:(id)arg1 ;
-(void)setLocalNode:(ODNode *)arg1 ;
-(void)setDirectoryNode:(ODNode *)arg1 ;
-(void)setGroupRecord:(ODRecord *)arg1 ;
-(ODNode *)localNode;
-(ODRecord *)groupRecord;
-(id)openDirectoryNodeWithName:(id)arg1 ;
-(void)retrieveGroupRecord:(id)arg1 ;
-(id)recordForAttributeType:(id)arg1 queryValue:(id)arg2 possibleTypes:(id)arg3 ;
-(id)recordForGUID:(id)arg1 possibleTypes:(id)arg2 ;
-(id)openLocalNode;
-(id)unreachableSubnodes;
-(char)authenticateWithUser:(id)arg1 password:(id)arg2 error:(id*)arg3 ;
-(id)computerLists;
-(id)computersInList:(id)arg1 ;
-(id)guestComputer;
-(id)localComputer;
-(id)computerListForComputer:(id)arg1 ;
-(id)contentsOfGroup:(id)arg1 ;
-(id)recordForName:(id)arg1 possibleTypes:(id)arg2 ;
-(id)groupMembersWithDetails:(id)arg1 ;
-(id)localUserHomeDirectoryPaths;
-(id)prunedUserHomeList:(id)arg1 ;
-(ODNode *)directoryNode;
-(void)finalize;
-(void)dealloc;
-(void)cleanup;
@end

