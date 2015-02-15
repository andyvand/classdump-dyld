/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:39:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Maps.app/Contents/MacOS/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Maps/Maps-Structs.h>
@class NVRouteStep, NVRoute, NSImage, NSString;

@interface NVPrintSnapshotViewDataSource : NSObject {

	NVRouteStep* _step;
	NVRoute* _route;
	NSImage* _pinImage;
	NSImage* _snapshotImage;
	long long _type;
	NSString* _pinLabel;
	SCD_Struct_NV5 _pinPosition;
	SCD_Struct_NV6 _geoBounds;

}

@property (retain) NVRouteStep * step;                      //@synthesize step=_step - In the implementation block
@property (assign) SCD_Struct_NV6 geoBounds;                //@synthesize geoBounds=_geoBounds - In the implementation block
@property (retain) NVRoute * route;                         //@synthesize route=_route - In the implementation block
@property (assign) SCD_Struct_NV5 pinPosition;              //@synthesize pinPosition=_pinPosition - In the implementation block
@property (retain) NSImage * pinImage;                      //@synthesize pinImage=_pinImage - In the implementation block
@property (retain) NSImage * snapshotImage;                 //@synthesize snapshotImage=_snapshotImage - In the implementation block
@property (assign) long long type;                          //@synthesize type=_type - In the implementation block
@property (copy) NSString * pinLabel;                       //@synthesize pinLabel=_pinLabel - In the implementation block
-(NSImage *)pinImage;
-(SCD_Struct_NV6)geoBounds;
-(id)initWithRoute:(id)arg1 index:(unsigned long long)arg2 ;
-(id)initWithPlace:(id)arg1 pinLabel:(id)arg2 ;
-(void)setGeoBounds:(SCD_Struct_NV6)arg1 ;
-(SCD_Struct_NV5)pinPosition;
-(void)setPinPosition:(SCD_Struct_NV5)arg1 ;
-(void)setPinImage:(NSImage *)arg1 ;
-(void)setSnapshotImage:(NSImage *)arg1 ;
-(NSString *)pinLabel;
-(void)setPinLabel:(NSString *)arg1 ;
-(void)setRoute:(NVRoute *)arg1 ;
-(NVRoute *)route;
-(NVRouteStep *)step;
-(void)setStep:(NVRouteStep *)arg1 ;
-(id)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSImage *)snapshotImage;
@end
