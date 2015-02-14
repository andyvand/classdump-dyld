/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:52 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Safari/Safari-Structs.h>
@class NSURL, NSString, NSData, NSDictionary, NSUUID;

@interface BrowserTabPersistentState : NSObject {

	Vector<unsigned int, 0, WTF::CrashOnOverflow>* _ancestorTabIdentifiers;
	Vector<BackForwardItemPersistentState *, 0, WTF::CrashOnOverflow>* _backForwardList;
	unsigned long long _currentBackForwardListItemIndex;
	char _restoredFromPersistentData;
	unsigned _tabIdentifier;
	NSURL* _url;
	NSString* _title;
	NSData* _sessionStateData;
	NSDictionary* _queuedNavigation;
	NSUUID* _tabUUID;

}

@property (nonatomic,readonly) NSURL * url;                                                    //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSData * sessionStateData;                                 //@synthesize sessionStateData=_sessionStateData - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * queuedNavigation;                           //@synthesize queuedNavigation=_queuedNavigation - In the implementation block
@property (nonatomic,readonly) unsigned tabIdentifier;                                         //@synthesize tabIdentifier=_tabIdentifier - In the implementation block
@property (nonatomic,readonly) const Vector<unsigned int* ancestorTabIdentifiers;              //@synthesize ancestorTabIdentifiers=_ancestorTabIdentifiers - In the implementation block
@property (nonatomic,readonly) NSUUID * tabUUID;                                               //@synthesize tabUUID=_tabUUID - In the implementation block
@property (assign,nonatomic) char restoredFromPersistentData;                                  //@synthesize restoredFromPersistentData=_restoredFromPersistentData - In the implementation block
-(id)initWithURL:(id)arg1 title:(id)arg2 ;
-(unsigned)tabIdentifier;
-(const Vector<unsigned int*)ancestorTabIdentifiers;
-(NSData *)sessionStateData;
-(char)restoredFromPersistentData;
-(NSUUID *)tabUUID;
-(NSDictionary *)queuedNavigation;
-(id)initWithBrowserTab:(const BrowserTab*)arg1 ;
-(void)setRestoredFromPersistentData:(char)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSURL *)url;
-(NSString *)title;
-(id)dictionaryRepresentation;
@end

