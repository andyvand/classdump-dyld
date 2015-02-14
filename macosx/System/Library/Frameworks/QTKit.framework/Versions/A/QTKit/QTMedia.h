/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QTKit/QTKit-Structs.h>
@class QTTrack;

@interface QTMedia : NSObject {

	int _proxy;
	long long _flags;
	QTTrack* _track;

}
+(id)mediaWithProxy:(int)arg1 ;
-(id)creationTime;
-(id)modificationTime;
-(long long)timeScale;
-(id)subType;
-(id)track;
-(id)dataReferenceEnumerator;
-(id)dataReferenceAtIndex:(int)arg1 ;
-(id)initWithProxy:(int)arg1 ;
-(char)restrictedToPlaybackAPI;
-(void)setRestrictedToPlaybackAPI:(char)arg1 ;
-(id)dataReferences;
-(void)setTimeScale:(long long)arg1 ;
-(void)setDataReference:(id)arg1 atIndex:(int)arg2 error:(id*)arg3 ;
-(void)setPlayHints:(long long)arg1 hintsMask:(long long)arg2 ;
-(id)mediaAttributes;
-(void)setMediaAttributes:(id)arg1 ;
-(int)dataReferenceCount;
-(long long)sampleCount;
-(long long)playHints;
-(id)typeInMedia;
-(id)timeCodeAtTime:(SCD_Struct_QT12)arg1 ;
-(id)currentTimeCode;
-(SCD_Struct_QT12)movieTimeForTimeCode:(id)arg1 ;
-(void)setQuality:(short)arg1 ;
-(short)quality;
-(void)finalize;
-(void)dealloc;
-(SCD_Struct_QT12)duration;
-(id)description;
-(void)invalidate;
-(id)type;
-(short)language;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)attributeForKey:(id)arg1 ;
-(char)hasCharacteristic:(id)arg1 ;
-(void)setLanguage:(short)arg1 ;
-(int)proxy;
@end

