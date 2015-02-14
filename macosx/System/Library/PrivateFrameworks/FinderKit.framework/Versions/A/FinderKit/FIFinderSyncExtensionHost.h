/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <libextension.dylib/NSExtensionContext.h>
#import <FinderKit/FIFinderSyncExtensionHostProtocol.h>
#import <FinderKit/NSMenuDelegate.h>

@class NSExtension, NSDictionary, NSString;

@interface FIFinderSyncExtensionHost : NSExtensionContext <FIFinderSyncExtensionHostProtocol, NSMenuDelegate> {

	TNSRef<id<FIFinderSyncExtensionProtocol> > _remote;
	NSExtension* _extension;
	unordered_map<TString, TNSRef<NSDictionary *>, std::__1::hash<TString>, std::__1::equal_to<TString>, std::__1::allocator<std::__1::pair<const TString, TNSRef<NSDictionary *> > > >* _badgeIDImageDicts;
	unordered_map<TString, TString, std::__1::hash<TString>, std::__1::equal_to<TString>, std::__1::allocator<std::__1::pair<const TString, TString> > >* _badgeIDLabels;
	TString* _toolbarItemName;
	TString* _toolbarToolTip;
	TNSRef<NSData *> _toolbarImageData;
	BOOL _toolbarImageIsTemplate;
	TFENodeVector* _interestedRoots;
	vector<TNSRef<NSURL *>, std::__1::allocator<TNSRef<NSURL *> > >* _unresolvedRoots;
	unordered_map<TFENode, TString, std::__1::hash<TFENode>, std::__1::equal_to<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, TString> > >* _nodeToBadgeIDMap;
	BOOL _fetchedContainingAppIcon;
	TIconRef* _containingAppIcon;
	id _requestIdentifier;
	NSDictionary* _toolbarItemDictionary;

}

@property (nonatomic,retain) NSExtension * extension;                         //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) id requestIdentifier;                            //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * toolbarItemDictionary;              //@synthesize toolbarItemDictionary=_toolbarItemDictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(TIconRef*)sidebarIconForFolder:(const TFENode*)arg1 ;
-(void)registerForDirectoryAtURL:(id)arg1 ;
-(void)unregisterForDirectoryAtURL:(id)arg1 ;
-(void)setToolbarItemName:(id)arg1 imageData:(id)arg2 isTemplate:(BOOL)arg3 toolTip:(id)arg4 ;
-(void)setBadgeImageDictionary:(id)arg1 label:(id)arg2 forIdentifier:(id)arg3 ;
-(void)setBadgeIdentifiersForURLs:(id)arg1 ;
-(void)setRequestIdentifier:(id)arg1 ;
-(id)remote;
-(TString*)toolbarItemName;
-(void)checkUnresolvedRootsAsync;
-(BOOL)interestedInNode:(const TFENode*)arg1 ;
-(void)openContainer:(const TFENode*)arg1 ;
-(void)closeContainer:(const TFENode*)arg1 ;
-(TString*)badgeIdentifierForNode:(const TFENode*)arg1 ;
-(id)badgeImageForIdentifier:(const TString*)arg1 size:(double)arg2 ;
-(TString*)badgeLabelForIdentifier:(const TString*)arg1 ;
-(BOOL)managesNodes:(const TFENodeVector*)arg1 target:(const TFENode*)arg2 ;
-(void)executePlugInCommand:(id)arg1 ;
-(void)registerInterestInContainer:(TFENode*)arg1 ;
-(void)registerFutureInterestInDirectoryURL:(id)arg1 ;
-(void)updateSidebarIconForNode:(const TFENode*)arg1 ;
-(void)updatedBadgeForNode:(const TFENode*)arg1 ;
-(id)requestIdentifier;
-(void)refreshToolbars;
-(id)toolbarImageData;
-(BOOL)allowedToRegisterForContainer:(TFENode*)arg1 ;
-(TIconRef*)containingAppIcon;
-(void)setContainingAppIcon:(TIconRef*)arg1 ;
-(TString*)toolbarToolTip;
-(id)imageForToolbarItem;
-(NSDictionary *)toolbarItemDictionary;
-(void)setToolbarItemDictionary:(NSDictionary *)arg1 ;
-(NSExtension *)extension;
-(void)dealloc;
-(void)menuNeedsUpdate:(id)arg1 ;
-(void)tearDown;
-(void)setExtension:(NSExtension *)arg1 ;
@end

