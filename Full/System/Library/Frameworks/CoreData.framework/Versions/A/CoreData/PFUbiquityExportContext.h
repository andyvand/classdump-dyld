/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSString, PFUbiquityLocation;

@interface PFUbiquityExportContext : NSObject {

	NSMutableDictionary* _storeNameToStoreExportContext;
	NSMutableDictionary* _ubiquityRootPathToStack;
	NSString* _localPeerID;
	PFUbiquityLocation* _ubiquityRootLocation;
	char _useLocalStorage;

}

@property (nonatomic,readonly) NSString * localPeerID;              //@synthesize localPeerID=_localPeerID - In the implementation block
@property (assign,nonatomic) char useLocalStorage;                  //@synthesize useLocalStorage=_useLocalStorage - In the implementation block
-(NSString *)localPeerID;
-(id)initWithLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2 ;
-(void)setUseLocalStorage:(char)arg1 ;
-(id)storeExportContextForStoreName:(id)arg1 ;
-(id)storeExportContextForStore:(id)arg1 ;
-(char)useLocalStorage;
-(void)dealloc;
-(id)description;
@end

