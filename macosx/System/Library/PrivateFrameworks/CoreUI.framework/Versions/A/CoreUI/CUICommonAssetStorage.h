/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CUICommonAssetStorage : NSObject {

	carheader* _header;
	renditionkeyfmt* _keyfmt;
	void* _imagedb;
	void* _colordb;
	void* _fontdb;
	void* _fontsizedb;
	void* _zcglyphdb;
	void* _zcbezeldb;
	void* _facetKeysdb;
	void* _elementDebugInfoDB;
	void* _partDebugInfoDB;
	char _swap;

}
+(void)initialize;
-(id)uuid;
-(char)getFontName:(id*)arg1 baselineOffset:(float*)arg2 forFontType:(id)arg3 ;
-(float)fontSizeForFontSizeType:(id)arg1 ;
-(unsigned)colorSpaceID;
-(char)usesCUISystemThemeRenditionKey;
-(id)zeroCodeGlyphList;
-(id)initWithPath:(id)arg1 forWriting:(char)arg2 ;
-(void)_initDefaultHeaderVersion:(double)arg1 versionString:(const char*)arg2 ;
-(void)_swapHeader;
-(void)_bringHeaderInfoUpToDate;
-(void)_swapKeyFormat;
-(long long)_storagefileTimestamp;
-(const renditionkeyfmt*)keyFormat;
-(long long)maximumRenditionKeyTokenCount;
-(id)assetKeysMatchingBlock:(/*^block*/id)arg1 ;
-(char)swapped;
-(void)_swapRenditionKeyArray:(unsigned short*)arg1 ;
-(id)assetForKey:(id)arg1 ;
-(renditionkeytoken)_swapRenditionKeyToken:(renditionkeytoken)arg1 ;
-(void)_swapZeroCodeInformation:(SCD_Struct_CU27*)arg1 ;
-(id)_zeroCodeListFromTree:(const void*)arg1 ;
-(const FontValue*)_fontValueForFontType:(id)arg1 ;
-(unsigned)storageVersion;
-(unsigned)coreuiVersion;
-(unsigned)schemaVersion;
-(long long)storageTimestamp;
-(int)keySemantics;
-(id)keyFormatData;
-(unsigned)renditionCount;
-(unsigned)associatedChecksum;
-(char)assetExistsForKey:(id)arg1 ;
-(id)allAssetKeys;
-(const renditionkeytoken*)renditionKeyForName:(const char*)arg1 hotSpot:(CGPoint*)arg2 ;
-(id)allRenditionNames;
-(id)renditionNameForKeyList:(renditionkeytoken*)arg1 ;
-(id)zeroCodeBezelList;
-(char)getColor:(colordef*)arg1 forName:(const char*)arg2 ;
-(char)hasColorForName:(const char*)arg1 ;
-(char)getBaselineOffset:(float*)arg1 forFontType:(id)arg2 ;
-(id)_dataForIdentifier:(unsigned)arg1 fromDebugTree:(void*)arg2 ;
-(id)_constantNameForIdentifier:(unsigned)arg1 fromDebugTree:(void*)arg2 ;
-(id)_displayNameForIdentifier:(unsigned)arg1 fromDebugTree:(void*)arg2 ;
-(id)constantNameForElementID:(long long)arg1 ;
-(id)displayNameForElementID:(long long)arg1 ;
-(id)constantNameForPartID:(long long)arg1 ;
-(id)displayNameForPartID:(long long)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)path;
-(id)initWithPath:(id)arg1 ;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(const char*)versionString;
@end

