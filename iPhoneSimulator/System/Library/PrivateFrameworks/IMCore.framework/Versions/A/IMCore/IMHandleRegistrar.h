/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:19 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface IMHandleRegistrar : NSObject {

	id _internal;

}

@property (assign,nonatomic) long long nameStyle; 
+(id)sharedInstance;
-(void)_accountsChanged:(id)arg1 ;
-(void)_dumpOutAllIMHandlesForAccount:(id)arg1 ;
-(void)clearSiblingCacheForIMHandle:(id)arg1 ;
-(void)registerIMHandle:(id)arg1 ;
-(void)unregisterIMHandle:(id)arg1 ;
-(void)_clearAccountSiblingsForGUID:(id)arg1 handle:(id)arg2 ;
-(void)_clearChatSiblingsForGUID:(id)arg1 handle:(id)arg2 ;
-(char)_buildingChatSiblings;
-(id)_existingAccountSiblingsForHandle:(id)arg1 ;
-(id)_accountSiblingsForHandle:(id)arg1 ;
-(id)_existingChatSiblingsForHandle:(id)arg1 ;
-(id)_chatSiblingsForHandle:(id)arg1 ;
-(id)siblingsForIMHandle:(id)arg1 ;
-(id)allIMHandles;
-(void)_emptySiblingCacheForIMHandleGUID:(id)arg1 ;
-(void)_buildSiblingsForIMHandle:(id)arg1 ;
-(void)_clearSiblingsCacheForIMHandle:(id)arg1 rebuildAfter:(char)arg2 ;
-(long long)nameStyle;
-(void)setNameStyle:(long long)arg1 ;
-(void)_dumpOutAllIMHandles;
-(id)init;
-(void)dealloc;
-(void)_addressBookChanged:(id)arg1 ;
@end

