/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:27 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSNavNode.h>

@interface NSNavFBENode : NSNavNode {

	OpaqueNodeRefRef _fbeNode;
	/*^block*/id _clearRegisteredForAttributes;

}
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)nodeWithPath:(id)arg1 ;
+(id)_nodeWithFBENode:(OpaqueNodeRefRef)arg1 ;
+(id)specialNodeOfType:(unsigned)arg1 ;
+(id)copyStandardSidebarNodes;
+(char)_nodeWithURLOrPath:(id)arg1 logonOK:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)topLevelNode;
+(id)networkNode;
+(id)copyStandardSidebarNodeTitles;
+(id)userHomeNode;
+(id)findSidebarNodeForNode:(id)arg1 ;
+(id)nodeWithPath:(id)arg1 logonOK:(char)arg2 ;
+(id)nodeWithURL:(id)arg1 logonOK:(char)arg2 ;
+(char)nodeWithURL:(id)arg1 logonOK:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
+(char)nodeWithPath:(id)arg1 logonOK:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)nodeWithSimpleQueryString:(id)arg1 searchScopes:(id)arg2 sortDescriptors:(id)arg3 ;
+(id)nodeWithQueryString:(id)arg1 searchScopes:(id)arg2 title:(id)arg3 sortDescriptors:(id)arg4 ;
+(id)nodeWithSavedQueryData:(id)arg1 title:(id)arg2 sortDescriptors:(id)arg3 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)path;
-(id)URL;
-(id)name;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isVisible;
-(id)initWithPath:(id)arg1 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(id)systemVersion;
-(char)isValid;
-(id)displayName;
-(id)fileType;
-(char)isExtensionHidden;
-(char)isLocked;
-(OpaqueIconRefRef)copyIcon;
-(char)isAlias;
-(char)isContainer;
-(id)parent;
-(char)isSharedServer;
-(long long)labelColorIndex;
-(char)isEjectableOrUnmountable;
-(char)ejectWithInteraction:(char)arg1 ;
-(char)acceptsRootNode;
-(id)getNodeAsDeepResolvedNode:(char)arg1 ;
-(id)childWithName:(id)arg1 ;
-(char)isFullyFormed;
-(id)getNodeAsContainerNodeForBrowsing:(char)arg1 ;
-(char)isUnauthenticatedMountPoint;
-(char)isPackage;
-(char)isNetworkNode;
-(id)children;
-(id)_initWithFBENode:(OpaqueNodeRefRef)arg1 ;
-(OpaqueNodeRefRef)fbeNode;
-(char)_addToSidebarSection:(unsigned)arg1 atIndex:(long long)arg2 ;
-(char)isComputerNode;
-(void)_registerForChildChangeNotifications;
-(void)_unregisterForChildChangeNotifications;
-(void)_sendChildrenChangedWithDictionary:(id)arg1 ;
-(OpaqueNodeRefRef)_childrenParentNodeRef;
-(OpaqueNodeRequestRef)_createNodeRequestRef;
-(id)_childNodeWithFBENode:(OpaqueNodeRefRef)arg1 ;
-(void)unregisterForPropertyChangedNotifications;
-(OpaqueEventNotifierRef)_createNodeChangeNotifier;
-(char)_registerForNotificationOptions:(unsigned)arg1 forNodeRef:(OpaqueNodeRefRef)arg2 ;
-(void)_unregisterForNotificationOptions:(unsigned)arg1 forNodeRef:(OpaqueNodeRefRef)arg2 ;
-(void)_registerForSelfChangeNotifications;
-(void)_unregisterForSelfChangeNotifications;
-(id)initWithPath:(id)arg1 logonOK:(char)arg2 ;
-(id)getNodeAsInfoNode:(char)arg1 ;
-(char)_nodeContainsPermission:(unsigned)arg1 ;
-(char)canBrowse;
-(void)_clearRegisteredForAttributes;
-(void)registerForPropertyChangedNotifications;
-(id)typeIdentifier;
-(char)supportsScreenSharing;
-(char)supportsFileSharing;
-(void)_connectToRemoveServer;
-(char)isODSNode;
-(char)isHomeNode;
-(char)_hasActiveEjectTaskInArray:(id)arg1 ;
-(char)isEjectable;
-(char)_ejectOrUnmount:(char)arg1 ;
-(char)isNil;
-(char)isDiskImage;
-(id)otherVolumesOnSameDevice;
-(char)unmount;
-(char)eject;
-(id)parentVolume;
-(short)FSVolumeRefNum;
-(char)isVolume;
-(char)isMountedSharePoint;
-(char)isOnHomeNodeVolume;
-(char)isServerOrSharePointNode;
-(id)getNodeAsFileOpNodeAndFixIfBroken:(char)arg1 ;
-(char)isDisconnectedMountPoint;
-(OpaqueIconRefRef)copySidebarIconRef;
-(id)_quickLookImageWithMaxSize:(CGSize)arg1 isThumbnail:(char)arg2 ;
-(char)canBeRead;
-(long long)_int64ValueForProperty:(unsigned)arg1 ;
-(long long)capacity;
-(long long)freeSpace;
-(char)addToFavoritesAtIndex:(long long)arg1 ;
-(char)addToSavedSearchesAtIndex:(long long)arg1 ;
-(void)_childrenChanged;
-(void)_addChildNode:(id)arg1 ;
-(void)_removeChildNode:(id)arg1 ;
-(void)_handleTargetChangedIsValid:(char)arg1 ;
-(void)registerForDeepChildChangedNotifications;
-(void)unregisterForDeepChildChangedNotifications;
-(id)getNodeAsResolvedNodeForSidebar;
-(id)getNodeAsResolvedNode:(char)arg1 withError:(int*)arg2 ;
-(id)previewAttributes;
-(void)setPreviewAttributes:(id)arg1 ;
-(id)serverUserName;
-(int)networkConnectionState;
-(void)launchScreenSharingApp;
-(void)disconnectShare;
-(void)connectToSharedServerAs;
-(void)askToUseODS;
-(id)searchScopeDisplayName;
-(char)isUnmountable;
-(char)isSharedFolder;
-(char)isMeetingRoom;
-(OpaqueIconRefRef)copyPreviewIcon;
-(id)sidebarIcon;
-(id)previewImageWithSize:(CGSize)arg1 isIconModeThumbnail:(char)arg2 ;
-(id)modDate;
-(id)creationDate;
-(id)lastOpenedDate;
-(long long)physicalSize;
-(long long)logicalSize;
-(long long)sortingGroup;
-(long long)permissions;
-(long long)usedSize;
-(id)kind;
-(id)kindWithoutPlatform;
-(id)shortVersion;
-(id)comment;
-(char)isODSRequiresAsk;
-(int)networkMediaTypes;
@end

