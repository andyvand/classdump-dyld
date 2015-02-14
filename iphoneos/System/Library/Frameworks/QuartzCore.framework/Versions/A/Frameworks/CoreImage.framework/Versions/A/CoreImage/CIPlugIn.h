/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:41 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSBundle, NSDictionary;

@interface CIPlugIn : NSObject {

	void** _priv[8];

}

@property (nonatomic,retain) NSBundle * plugInBundle; 
@property (assign,nonatomic) int loadStatus; 
@property (nonatomic,retain) NSDictionary * descriptionDictionary; 
@property (assign,nonatomic) long long flags; 
@property (nonatomic,retain) id<CIPlugInRegistration> pluginLoader; 
@property (nonatomic,retain,readonly) NSDictionary * filtersDictionary; 
+(void)scanForPlugInsWithFlags:(int)arg1 ;
+(void)addPlugInAtURL:(id)arg1 flags:(int)arg2 ;
+(void)loadNonExecutablePlugIns;
+(void)loadPlugIn:(id)arg1 allowNonExecutable:(char)arg2 ;
+(void)loadPlugIn:(id)arg1 allowExecutableCode:(char)arg2 ;
+(char)isPlugInAlreadyLoadedAtURL:(id)arg1 ;
+(id)uniqueIdentifierForFileAtURL:(id)arg1 ;
+(id)imageUnitDirectoryURLs;
+(void)addAllPlugInsAtURL:(id)arg1 flags:(int)arg2 ;
+(char)hasPluginWithIdentifier:(id)arg1 ;
+(void)loadAllPlugIns;
-(NSBundle *)plugInBundle;
-(void)setPlugInBundle:(NSBundle *)arg1 ;
-(int)loadStatus;
-(void)setLoadStatus:(int)arg1 ;
-(void)setDescriptionDictionary:(NSDictionary *)arg1 ;
-(id<CIPlugInRegistration>)pluginLoader;
-(void)setPluginLoader:(id<CIPlugInRegistration>)arg1 ;
-(NSDictionary *)filtersDictionary;
-(id)initWithURL:(id)arg1 flags:(int)arg2 ;
-(int)loadPlugIn;
-(void)setFlags:(long long)arg1 ;
-(NSDictionary *)descriptionDictionary;
-(void)finalize;
-(void)dealloc;
-(long long)flags;
@end

