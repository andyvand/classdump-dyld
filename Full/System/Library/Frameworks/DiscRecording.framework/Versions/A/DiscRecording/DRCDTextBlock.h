/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/DiscRecording.framework/Versions/A/DiscRecording
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface DRCDTextBlock : NSObject {

	void* _ref;

}
+(id)arrayOfCDTextBlocksFromPacks:(id)arg1 ;
+(char)isPropertyKey:(id)arg1 ;
+(id)cdTextBlockWithLanguage:(id)arg1 encoding:(unsigned long long)arg2 ;
+(void)setupBindings;
+(void)initialize;
-(id)initWithLanguage:(id)arg1 encoding:(unsigned long long)arg2 ;
-(id)trackDictionaries;
-(void)setTrackDictionaries:(id)arg1 ;
-(id)objectForKey:(id)arg1 ofTrack:(unsigned long long)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ofTrack:(unsigned long long)arg3 ;
-(unsigned long long)flatten;
-(void)_DiscRecording_KVCSetterPlaceholder:(id)arg1 ;
-(id)_DiscRecording_KVCGetterPlaceholder;
-(void)setProperties:(id)arg1 ;
-(unsigned long long)encoding;
-(unsigned long long)_cfTypeID;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(char)validateValue:(id*)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)properties;
-(id)language;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)valueForUndefinedKey:(id)arg1 ;
@end

