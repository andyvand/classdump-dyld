/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:57:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/sbin/systemstats
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSUUID, AbsTime, Interpolator, NSMutableDictionary, Job;

@interface Process : NSObject {

	unsigned long long _pid;
	unsigned long long _ppid;
	unsigned long long _responsible_pid;
	unsigned long long _uniqueid;
	unsigned long long _parent_uniqueid;
	unsigned long long _responsible_uniqueid;
	NSString* _label;
	NSString* _displayName;
	NSUUID* _macho_uuid;
	AbsTime* _start_time;
	AbsTime* _exit_time;
	Interpolator* _cpuTime;
	Interpolator* _idle_wakeups;
	Interpolator* _interrupts;
	Interpolator* _pageins;
	Interpolator* _residentSize;
	Interpolator* _wired;
	NSMutableDictionary* _stats;
	Job* _job;
	Job* _owner;

}

@property (assign,nonatomic) unsigned long long pid;                               //@synthesize pid=_pid - In the implementation block
@property (assign,nonatomic) unsigned long long ppid;                              //@synthesize ppid=_ppid - In the implementation block
@property (assign,nonatomic) unsigned long long responsible_pid;                   //@synthesize responsible_pid=_responsible_pid - In the implementation block
@property (assign,nonatomic) unsigned long long uniqueid;                          //@synthesize uniqueid=_uniqueid - In the implementation block
@property (assign,nonatomic) unsigned long long parent_uniqueid;                   //@synthesize parent_uniqueid=_parent_uniqueid - In the implementation block
@property (assign,nonatomic) unsigned long long responsible_uniqueid;              //@synthesize responsible_uniqueid=_responsible_uniqueid - In the implementation block
@property (nonatomic,retain) NSString * label;                                     //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * displayName;                               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSUUID * macho_uuid;                                  //@synthesize macho_uuid=_macho_uuid - In the implementation block
@property (nonatomic,retain) AbsTime * start_time;                                 //@synthesize start_time=_start_time - In the implementation block
@property (nonatomic,retain) AbsTime * exit_time;                                  //@synthesize exit_time=_exit_time - In the implementation block
@property (nonatomic,readonly) Interpolator * cpuTime;                             //@synthesize cpuTime=_cpuTime - In the implementation block
@property (nonatomic,readonly) Interpolator * idle_wakeups;                        //@synthesize idle_wakeups=_idle_wakeups - In the implementation block
@property (nonatomic,readonly) Interpolator * interrupts;                          //@synthesize interrupts=_interrupts - In the implementation block
@property (nonatomic,readonly) Interpolator * pageins;                             //@synthesize pageins=_pageins - In the implementation block
@property (nonatomic,readonly) Interpolator * residentSize;                        //@synthesize residentSize=_residentSize - In the implementation block
@property (nonatomic,readonly) Interpolator * wired;                               //@synthesize wired=_wired - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * stats;                          //@synthesize stats=_stats - In the implementation block
@property (assign,nonatomic,__weak) Job * job;                                     //@synthesize job=_job - In the implementation block
@property (assign,nonatomic,__weak) Job * owner;                                   //@synthesize owner=_owner - In the implementation block
+(id)stringByRemovingTrailingUUIDsAndLaunchServicesStuff:(id)arg1 ;
-(Interpolator *)cpuTime;
-(Interpolator *)interrupts;
-(Interpolator *)pageins;
-(Interpolator *)residentSize;
-(void)setPpid:(unsigned long long)arg1 ;
-(unsigned long long)uniqueid;
-(void)setUniqueid:(unsigned long long)arg1 ;
-(unsigned long long)responsible_pid;
-(void)setResponsible_pid:(unsigned long long)arg1 ;
-(unsigned long long)parent_uniqueid;
-(void)setParent_uniqueid:(unsigned long long)arg1 ;
-(unsigned long long)responsible_uniqueid;
-(void)setResponsible_uniqueid:(unsigned long long)arg1 ;
-(NSUUID *)macho_uuid;
-(void)setMacho_uuid:(NSUUID *)arg1 ;
-(AbsTime *)start_time;
-(void)setStart_time:(AbsTime *)arg1 ;
-(AbsTime *)exit_time;
-(void)setExit_time:(AbsTime *)arg1 ;
-(Interpolator *)idle_wakeups;
-(NSMutableDictionary *)stats;
-(void)setStats:(NSMutableDictionary *)arg1 ;
-(Job *)job;
-(void)setJob:(Job *)arg1 ;
-(unsigned long long)pid;
-(unsigned long long)ppid;
-(Interpolator *)wired;
-(void)setPid:(unsigned long long)arg1 ;
-(id)init;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)label;
-(void)setOwner:(Job *)arg1 ;
-(Job *)owner;
-(id)objectForKeyedSubscript:(id)arg1 ;
@end

