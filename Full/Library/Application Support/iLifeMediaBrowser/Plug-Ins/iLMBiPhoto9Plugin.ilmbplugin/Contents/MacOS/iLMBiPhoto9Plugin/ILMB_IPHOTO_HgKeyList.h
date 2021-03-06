/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Application Support/iLifeMediaBrowser/Plug-Ins/iLMBiPhoto9Plugin.ilmbplugin/Contents/MacOS/iLMBiPhoto9Plugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLMBiPhoto9Plugin/iLMBiPhoto9Plugin-Structs.h>
#import <iLMBiPhoto9Plugin/NSCopying.h>

@class NSMutableArray;

@interface ILMB_IPHOTO_HgKeyList : NSObject <NSCopying> {

	unsigned long long _keyCount;
	NSMutableArray* _keyPages;
	unsigned long long _lastOffsetFoundAt;
	char _isDirty;

}

@property (assign) char isDirty;              //@synthesize isDirty=_isDirty - In the implementation block
+(void)testHgKeyList;
-(id)keyRangesWithSingletons:(id)arg1 ;
-(unsigned long long)_findKeyOffset:(unsigned long long)arg1 fromLow:(unsigned long long)arg2 toHigh:(unsigned long long)arg3 ;
-(void)mergeKeyList:(id)arg1 ;
-(id)encodeAsData;
-(unsigned long long)lastKey;
-(unsigned long long)_findKeyOffset:(unsigned long long)arg1 ;
-(id)_pageAtIndex:(unsigned long long)arg1 ;
-(id)listOfKeys;
-(void)empty;
-(unsigned long long)dataForKey:(unsigned long long)arg1 ;
-(id)numberForKey:(unsigned long long)arg1 ;
-(char)removeKey:(unsigned long long)arg1 ;
-(unsigned long long)firstKey;
-(void)setIsDirty:(char)arg1 ;
-(void)setData:(unsigned long long)arg1 forKey:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)description;
-(char)isDirty;
-(void)lock;
-(void)unlock;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEmpty;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)_pageCount;
-(id)firstPage;
-(id)lastPage;
@end

