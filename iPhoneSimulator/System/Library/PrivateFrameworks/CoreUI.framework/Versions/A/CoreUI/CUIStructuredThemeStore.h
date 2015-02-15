/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:33 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIStructuredThemeStorage.h>
#import <CoreUI/CUIStructuredThemeStorage2.h>

@class NSMutableDictionary, CUICommonAssetStorage, NSLock, NSString, NSCache;

@interface CUIStructuredThemeStore : NSObject <CUIStructuredThemeStorage, CUIStructuredThemeStorage2> {

	NSMutableDictionary* _cache;
	CUICommonAssetStorage* _store;
	NSLock* _cacheLock;
	NSLock* _storeLock;
	unsigned long long _themeIndex;
	NSString* _bundleID;
	NSCache* _assetExistanceCache;
	NSCache* _assetFPOStatus;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)bundleID;
-(unsigned)documentFormatVersion;
-(unsigned)distilledInCoreUIVersion;
-(unsigned)authoredWithSchemaVersion;
-(char)getPhysicalColor:(colordef*)arg1 withName:(id)arg2 ;
-(char)getFontName:(id*)arg1 baselineOffset:(double*)arg2 forFontType:(id)arg3 ;
-(double)fontSizeForFontSizeType:(id)arg1 ;
-(id)renditionWithKey:(const renditionkeytoken*)arg1 ;
-(char)canGetRenditionWithKey:(const renditionkeytoken*)arg1 isFPO:(char*)arg2 ;
-(const renditionkeytoken*)renditionKeyForName:(id)arg1 ;
-(unsigned long long)colorSpaceID;
-(char)canGetRenditionWithKey:(const renditionkeytoken*)arg1 ;
-(char)usesCUISystemThemeRenditionKey;
-(id)zeroCodeGlyphList;
-(id)debugDescriptionForKeyList:(const renditionkeytoken*)arg1 ;
-(const renditionkeytoken*)renditionKeyForName:(id)arg1 cursorHotSpot:(CGPoint*)arg2 ;
-(const renditionkeyfmt*)keyFormat;
-(long long)maximumRenditionKeyTokenCount;
-(char)assetExistsForKey:(renditionkeytoken*)arg1 ;
-(id)constantNameForElementID:(long long)arg1 ;
-(id)displayNameForElementID:(long long)arg1 ;
-(id)constantNameForPartID:(long long)arg1 ;
-(id)displayNameForPartID:(long long)arg1 ;
-(id)copyKeySignatureForKey:(const renditionkeytoken*)arg1 withBytesNoCopy:(char*)arg2 length:(unsigned long long)arg3 ;
-(void)clearRenditionCache;
-(id)allImageNames;
-(id)imagesWithName:(id)arg1 ;
-(id)_newRenditionKeyDataFromKey:(renditionkeytoken*)arg1 ;
-(void)_updateKeyWithCompatibilityMapping:(renditionkeytoken*)arg1 ;
-(void)_getKeyForAssetClosestToKey:(renditionkeytoken*)arg1 foundAsset:(char*)arg2 ;
-(const renditionkeyfmt*)renditionKeyFormat;
-(id)lookupAssetForKey:(renditionkeytoken*)arg1 ;
-(void)_getKeyForAssetInOtherLookGroupClosestToKey:(renditionkeytoken*)arg1 foundAsset:(char*)arg2 ;
-(id)prefilteredAssetDataForKey:(renditionkeytoken*)arg1 ;
-(char)_canGetRenditionWithKey:(const renditionkeytoken*)arg1 isFPO:(char*)arg2 lookForSubstitutions:(char)arg3 ;
-(char)hasPhysicalColorWithName:(id)arg1 ;
-(id)baseGradationKeySignatureForKey:(const renditionkeytoken*)arg1 ;
-(id)keySignatureForKey:(const renditionkeytoken*)arg1 ;
-(id)themeStore;
-(id)convertRenditionKeyToKeyData:(renditionkeytoken*)arg1 ;
-(void)setThemeIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(NSString *)debugDescription;
-(id)initWithPath:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
@end

