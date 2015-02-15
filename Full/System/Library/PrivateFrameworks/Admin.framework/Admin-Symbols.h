-[User(UserPrivate) _cacheUserInfo]
+[PowerActivityManager sharedPowerActivityManager]
-[PowerActivityManager init]
-[PowerActivityManager registerPMFeatureChangedNotification]
-[PowerActivityManager displaySleepsFor:]
-[PowerActivityManager _valueForKey:powerSource:]
-[PowerActivityManager _activePowerProfiles]
-[PowerActivityManager _powerPreferences]
+[User currentUser]
+[User findUserByName:searchParent:]
+[User(UserPrivate) _findUserName:searchParent:]
+[User(UserPrivate) _findUser:fullName:searchParent:attributes:]
+[User(UserPrivate) _createDSListFromArray:]
+[DSNode openSearchNode]
+[DSNode nodeWithName:]
-[DSNode initWithNodeName:]
-[DSNode open]
-[DSNode findRecordWithName:type:attribute:]
-[DSNode _findRecordsWithName:type:attribute:expectedCount:]
-[DSNode _recordsFromBuffer:count:]
+[User(UserPrivate) _userWithInfo:attributes:]
+[DSNode openDefaultLocalNode]
-[DSNode setDirectoryService:]
-[User(UserPrivate) _initWithInfo:node:attributes:]
-[DSRecord initWithRecordName:type:node:]
-[DSNode isOpen]
-[User(UserPrivate) _cacheAttributes:forKey:]
-[User isExternalAccount]
-[User(UserPrivate) _cachedFirstObjectForKey:]
-[User(UserPrivate) _cachedObjectForKey:]
-[User homeloc]
+[User allLocalUsers]
-[DSNode findRecordsWithName:type:attribute:]
-[User(UserPrivate) _setLocal:]
+[User shouldDisplayUser:]
-[User shell]
-[User name]
-[User isDisabledUser]
+[User shouldHide500Users]
-[User isGuestUser]
-[User(CSFDESupport) canUnlockFDE]
-[User fullName]
-[User generatedUID]
-[User dealloc]
-[DSRecord dealloc]
-[DSRecord close]
+[DSAuthenticator sharedDSAuthenticator]
-[User isTokenAuthenticationEnabled]
-[User isAdministrator]
-[User hasEmptyPassword]
-[DSNode verifyUserName:password:]
-[DSNode _authenticateNodeWithName:password:oldPassword:data:method:doAuthentication:]
-[PowerActivityManager hasBattery]
_hasPowerSource
+[User(CSFDESupport) isBootVolumeCSFDE]
+[Authenticator sharedAuthenticator]
-[Authenticator isAuthenticated]
-[PowerActivityManager hasUPS]
-[PowerActivityManager _refreshActivePowerProfiles]
-[PowerActivityManager _refreshPowerPreferences]
-[PowerActivityManager _refreshPowerProfiles]
-[PowerActivityManager systemSleeps:]
-[PowerActivityManager diskSleeps:]
-[PowerActivityManager darkWakeFor:]
-[PowerActivityManager wakesOnLANFor:]
-[PowerActivityManager enablePowerButtonSleepFor:]
-[PowerActivityManager autoRestartsFor:]
-[PowerActivityManager lowerDisplayBrightnessFor:]
-[PowerActivityManager sleepUsesDimFor:]
-[PowerActivityManager restartsOnHang:]
-[Authenticator authenticateUsingAuthorization:]
-[PowerActivityManager supportsDarkWakeFor:]
-[PowerActivityManager supportsWakeOnLANFor:]
-[PowerActivityManager supportsAutoRestartFor:]
-[PowerActivityManager supportsLowerDisplayBrightnessFor:]
-[PowerActivityManager supportsEnablePowerButtonSleepFor:]
-[PowerActivityManager supportsRestartOnHangFor:]
+[InternetServices sharedInternetServices]
-[DSAuthenticator authenticateUsingAuthorization:]
-[DSNode authenticateNodeWithAuthorization:]
-[InternetServices isOpticalDiscSharingEnabled]
+[ARDConfig sharedARDConfig]
-[ARDConfig isARDOn]
+[PrinterSharingConfig sharedPrinterSharing]
-[ARDConfig isScreenSharingOn]
-[InternetServices screensharingEnabled]
-[PrinterSharingConfig isPrinterSharingOn]
-[InternetServices sshServerEnabled]
+[RemoteAEConfig sharedRemoteAEConfig]
-[RemoteAEConfig isRemoteAppleEventsEnabled]
-[InternetServices remoteAEServerEnabled]
+[Group allLocalGroups]
-[Group _initWithInfo:node:]
-[User groupID]
-[User homeDirectory]
-[User familySettings]
-[User userID]
-[User isLocal]
-[User hasMobileHomeDirectory]
-[User picture]
+[User findUserByID:searchParent:]
-[DSNode findRecordsByID:type:attribute:]
-[DSNode _findRecordsByID:type:attribute:expectedCount:]
-[Group gid]
+[Group findGroupByName:]
+[Group findGroupByName:node:]
-[User userCanChangePicture]
-[User(UserPrivate) _checkWritersKey:]
-[DSNode isNetInfoNode]
-[User isNewUser]
-[User userCanChangeFullName]
-[User isDirectAdministrator]
+[Group adminGroup]
-[Group hasMember:]
-[Group arrayOfMemberNames]
-[DSRecord isOpen]
-[DSRecord open]
-[DSNode dirNodeReference]
-[DSRecord attributeForType:fullInfo:]
-[DSRecord attributesForTypes:]
-[Group dealloc]
+[NetworkTimeClient sharedNetworkTimeClient]
-[NetworkTimeClient servers]
+[NetworkTimeServer serverWithConfigurationString:]
-[NetworkTimeServer initWithConfigurationString:]
-[NetworkTimeServer setAddress:]
-[NetworkTimeServer address]
-[NetworkTimeClient isRunning]
-[NetworkTimeClient server]
-[NetworkTimeClient startWithAuthorization:]
-[InternetServices setInetDServiceEnabled:enabled:]
-[NetworkTimeClient stopWithAuthorization:]
-[NetworkTimeServer dealloc]
+[User isCurrentUserAdministrator]
+[User currentUserCSIdentityRef]
-[Authenticator deauthenticate]
-[DSAuthenticator deauthenticate]
-[DSNode deauthenticate]
-[DSNode close]
+[HostConfig hostConfigForSystemFile]
-[HostConfig setComputerName:]
-[HostConfig setZeroConfName:]
___44+[NetworkTimeClient sharedNetworkTimeClient]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[NetworkTimeClient _ntpSetEnabled:]
-[NetworkTimeClient setServers:]
-[NetworkTimeClient setServer:]
-[NetworkTimeClient start]
-[NetworkTimeClient stop]
-[NetworkTimeClient restart]
-[NetworkTimeClient startSyncing]
-[NetworkTimeClient stopSyncing]
-[NetworkTimeClient setLaunchAtStartup:]
-[NetworkTimeClient isSyncing]
-[NetworkTimeClient isServing]
-[NetworkTimeClient restartAsync]
-[NetworkTimeClient synchronizeNow]
-[NetworkTimeServer setDescriptiveName:]
-[NetworkTimeServer description]
-[NetworkTimeServer descriptiveName]
-[NetworkTimeServer configurationString]
+[SystemClock sharedSystemClock]
___32+[SystemClock sharedSystemClock]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[SystemClock setTimeZone:]
-[SystemClock setTime:]
+[WebServerConfig sharedWebServerConfig]
+[WebServerConfig sharedRemoteAdminServerConfig]
-[WebServerConfig initWithConfigurationDirectory:]
-[WebServerConfig dealloc]
-[WebServerConfig startWebServer]
-[WebServerConfig stopWebServer]
-[WebServerConfig restartWebServer]
-[WebServerConfig isWebServerRunning]
-[WebServerConfig isValidServerName:]
-[WebServerConfig webServerName]
+[User isUserNameUnique:searchParent:]
+[User extendNameUntilUnique:]
+[User findUserByFullName:searchParent:]
+[User allLocalUserNamesWithPrimaryGroup:]
+[User nextFreeUserID]
+[User newUser]
+[User hasRootPasswordBeingSet]
+[User suggestUnixNameUsingString:]
+[User generateUnixNameUsingString:]
+[User isUnixNameValid:]
+[User removeHomeFolderOfUser:]
+[User removeHomeFolderOfUser:async:delegate:]
___26+[User shouldHide500Users]_block_invoke
-[User initWithRecordName:type:node:]
-[User description]
-[User isPasswordServerEnabled]
-[User setName:]
-[User setUserID:]
-[User groupName]
-[User setGroupID:]
-[User setShell:]
-[User setFullName:]
-[User setFullNameImmideately:]
-[User setUserCanChangeFullName:]
-[User userFullNameDidChangeExternally]
-[User userCanChangeCertificate]
-[User setUserCanChangeCertificate:]
-[User setHomeDirectory:]
-[User defaultHomeDirectory]
-[User createHomeDirectory]
-[User createHomeDirectoryWithParameters:]
-[User isHomeDirInStandartPlace]
-[User userCanChangePassword]
-[User setUserCanChangePassword:]
-[User setShadowPassword:]
-[User shadowPassword]
-[User setPassword:]
-[User setPassword:oldPassword:]
-[User setNoLoginPassword]
-[User verifyPassword:]
-[User verifyPasswordReturnError:]
-[User setSMBCompatible:password:]
-[User isSMBCompatible]
-[User setAppleIDLoginEnabled:appleID:appleIDPassword:]
-[User setAppleIDLoginEnabled:appleID:appleIDPassword:password:]
-[User isAppleIDLoginEnabled]
-[User appleIDLoginAccount]
-[User appleIDLoginDidChangeExternally]
-[User authenticateWithPassword:]
-[User authenticate:]
-[User deauthenticate]
-[User hint]
-[User setHint:]
-[User userCanChangeHint]
-[User setUserCanChangeHint:]
-[User setHintImmideately:]
-[User picturePath]
-[User setPicturePath:]
-[User setPicture:]
-[User setUserCanChangePicture:]
-[User setPictureImmideately:]
-[User setPicturePathImmideately:]
-[User userPictureDidChangeExternally]
-[User setAdministrator:]
-[User updatePublicFolderAliasInNI]
-[User revertChanges]
-[User deleteUser]
-[User deleteUserWithParameters:]
___33-[User deleteUserWithParameters:]_block_invoke
-[User commitChanges]
-[User commitChangesReturningError]
___35-[User commitChangesReturningError]_block_invoke
-[User createHTTPConfig]
-[User deleteHTTPConfig]
-[User HTTPConfigFilePath]
-[User naprivs]
-[User setNAPrivs:]
-[User ruid]
-[User setruid:]
-[User originalHomeDirectory]
-[User originalNFSHomeDirectory]
-[User originalNodeName]
-[User metaNodeLocation]
-[User isLocalCachedAccount]
-[User setHomeloc:]
-[User isHidden]
-[User setHidden:]
-[User setFamilySettings:]
-[User hasMSXSettings]
-[User deleteMSXSettings]
-[User setMCXFlags:]
-[User familySettingsDidChangeExternally]
-[User enableUserWithPassword:]
-[User enableUser]
-[User disableUser]
-[User setGeneratedUID:]
-[User setGuestUser:]
-[User defaultLanguage]
-[User setDefaultLanguage:immideately:]
-[User userCanChangeDefaultLanguage]
-[User setUserCanChangeDefaultLanguage:]
-[Group _postDistributedNotification:]
+[Group createGroupWithName:gid:inNode:]
+[Group createGroupWithName:realName:gid:inNode:]
+[Group findGroupByID:]
+[Group findGroupByGUID:]
+[Group nextFreeGroupID]
+[Group nextFreeGroupIDInRange:]
___19+[Group adminGroup]_block_invoke
-[Group initWithRecordName:type:node:]
-[Group setRecordNameTo:]
-[Group setgid:]
-[Group generatedUID]
-[Group setGeneratedUID:]
-[Group realName]
-[Group setRealName:]
-[Group addMemberUUID:name:]
-[Group addMember:]
-[Group removeMemberUUID:name:]
-[Group removeMember:]
-[Group hasMemberUUID:]
-[Group arrayOfMemberGUIDs]
-[Group addNestedGroup:]
-[Group removeNestedGroup:]
-[Group hasNestedGroup:]
-[Group arrayOfNestedGUIDs]
-[Group deleteGroup]
-[Group refresh]
+[Group(GroupWriteConfig) wcCreateGroupWithName:realName:]
-[Group(GroupWriteConfig) wcRemoveMember:]
-[Group(GroupWriteConfig) wcSetGroupName:]
-[Group(GroupWriteConfig) wcAddNestedGroupWithName:]
-[Group(GroupWriteConfig) wcAddNestedGroup:]
-[Group(GroupWriteConfig) wcRemoveNestedGroupWithName:]
-[Group(GroupWriteConfig) wcAddAccountWithName:]
-[Group(GroupWriteConfig) wcRemoveAccountWithName:]
-[Group(GroupWriteConfig) wcRemoveGroupMemberWithUUID:]
+[NSDictionary(cXMLDataConvertor) dictionaryFromXMLString:]
-[NSDictionary(cXMLDataConvertor) XMLString]
-[RemoteAEConfig boolFromCFValueForKey:]
-[RemoteAEConfig passwordDataForString:]
-[RemoteAEConfig setRemoteAppleEventsEnabled:]
-[RemoteAEConfig isCompatibleUserEnabled]
-[RemoteAEConfig hasCompatibleUserPassword]
_pm_feature_change
-[PowerActivityManager unregisterPMFeatureChangedNotification]
-[PowerActivityManager dealloc]
-[PowerActivityManager finalize]
-[PowerActivityManager _powerProfiles]
-[PowerActivityManager _setValue:forKey:powerSource:]
-[PowerActivityManager activityProfile]
-[PowerActivityManager writeUPSSettings:forKey:]
-[PowerActivityManager updateProfilesAndSendNotification]
-[PowerActivityManager setMinutesUntilDisplaySleeps:for:]
-[PowerActivityManager setMinutesUntilDiskSleeps:for:]
-[PowerActivityManager setMinutesUntilSystemSleeps:for:]
-[PowerActivityManager supportsWakeOnRingFor:]
-[PowerActivityManager supportsReducedCPUSpeedFor:]
-[PowerActivityManager supportsDynamicPowerStep:]
-[PowerActivityManager supportsSleepUsesDimFor:]
-[PowerActivityManager wakesOnRingFor:]
-[PowerActivityManager reducedCPUSpeedFor:]
-[PowerActivityManager dynamicPowerStepFor:]
-[PowerActivityManager setDarkWake:for:]
-[PowerActivityManager setEnablePowerButtonSleep:for:]
-[PowerActivityManager setWakesOnLAN:for:]
-[PowerActivityManager setWakesOnRing:for:]
-[PowerActivityManager setAutoRestarts:for:]
-[PowerActivityManager setReducedCPUSpeed:for:]
-[PowerActivityManager setDynamicPowerStep:for:]
-[PowerActivityManager setLowerDisplayBrightness:for:]
-[PowerActivityManager setSleepUsesDim:for:]
-[PowerActivityManager setRestartsOnHang:for:]
-[PowerActivityManager repeatingPowerEvents]
-[PowerActivityManager cancelAllRepeatingPowerEvents]
-[PowerActivityManager scheduleRepeatingPowerEvent:]
-[PowerActivityManager upsActivityProfile]
-[PowerActivityManager refreshUPSShutdownLevels]
-[PowerActivityManager upsSupportsShutdownKey:]
-[PowerActivityManager upsShutdownEnabledForKey:]
-[PowerActivityManager setUPSShutdownEnabled:forKey:]
-[PowerActivityManager upsShutdownValueForKey:]
-[PowerActivityManager setUPSShutdownValue:forKey:]
-[PowerActivityManager setActivePowerProfiles:]
-[PowerActivityManager ratingForPowerProfile:powerSource:]
___pm_feature_change_block_invoke
-[InternetServices ftpServerEnabled]
-[InternetServices setFTPServerEnabled:]
-[InternetServices isFTPServerAvailable]
-[InternetServices setSSHServerEnabled:]
-[InternetServices isSSHServerAvailable]
-[InternetServices setRemoteAEServerEnabled:]
-[InternetServices isRemoteAEServerAvailable]
-[InternetServices faxReceiveEnabled]
-[InternetServices setFaxReceiveEnabled:]
-[InternetServices isFaxReceiveAvailable]
-[InternetServices httpdEnabled]
-[InternetServices setHttpdEnabled:]
-[InternetServices isHttpdAvailable]
-[InternetServices saveNatPrefs:]
-[InternetServices setOpticalDiscSharingEnabled:]
-[InternetServices setScreensharingEnabled:]
-[InternetServices sendSIGHUPToEfax]
-[InternetServices _netFSServerFrameworkBundle]
___47-[InternetServices _netFSServerFrameworkBundle]_block_invoke
-[InternetServices isNSCProtocolEnabled:]
-[InternetServices nscServerShutdown:withDelay:]
-[InternetServices isNSServerShuttingDown:]
-[InternetServices nscServerCancelShutdown:refNum:]
-[InternetServices setNSCProtocols:enabled:]
-[InternetServices isNSCProtocolAvailable:]
-[InternetServices numberOfClientsForProtocols:]
-[InternetServices isGuestForProtocolEnabled:]
-[InternetServices setGuestForProtocol:enabled:]
-[Authenticator _toolStartedNotification:]
-[Authenticator dealloc]
-[Authenticator finalize]
-[Authenticator authenticateUsingAuthorizationSync:]
+[DynamicDNSConfig sharedDynamicDNSConfig]
-[DynamicDNSConfig scWriteBrowseDomains:]
-[DynamicDNSConfig scWriteRegistrationDomains:]
-[DynamicDNSConfig scWriteHostname:]
___debugLoggingEnabled_block_invoke
___30+[DSNode openDefaultLocalNode]_block_invoke
+[DSNode closeDefaultLocalNode]
___31+[DSNode closeDefaultLocalNode]_block_invoke
+[DSNode openProxyNodeAtAddress:name:password:port:]
+[DSNode nodeIsDefaultLocalNode:]
__createDirNodePath
+[DSNode isConnectedToNetwork]
-[DSNode _findUsersWithFullName:attribute:expectedCount:]
-[DSNode dealloc]
-[DSNode finalize]
-[DSNode nodeName]
-[DSNode replacementObjectForPortCoder:]
-[DSNode authenticateName:withPassword:]
-[DSNode setPassword:oldPassword:forUser:]
-[DSNode setPasswordScheme:forUser:password:]
-[DSNode setPasswordAsRoot:forUser:]
-[DSNode setHashedPassword:forUser:]
-[DSNode hashedPasswordForUser:]
-[DSNode findUsersWithFullName:attribute:]
-[DSNode findUserWithFullName:attribute:]
-[DSNode findRecordByID:type:attribute:]
-[DSNode directoryService]
-[DSRecord _cleanUpDeletedRecord]
-[DSRecord _setValue:forKey:]
+[DSRecord nextFreeIDInRange:]
-[DSRecord initWithRecord:]
-[DSRecord initWithRecordName:type:]
-[DSRecord finalize]
-[DSRecord description]
-[DSRecord replacementObjectForPortCoder:]
-[DSRecord name]
-[DSRecord node]
-[DSRecord setRecordNameTo:]
-[DSRecord addAttribute:value:]
-[DSRecord addValue:toAttributeType:]
-[DSRecord setValue:withValueID:forAttributeType:]
-[DSRecord removeAttribute:]
-[DSRecord removeValue:fromAttributeType:]
-[DSRecord removeValueID:fromAttributeType:]
-[DSRecord createRecord]
-[DSRecord createRecordWithAttributes:]
-[DSRecord createRecordInNode:withAttributes:]
-[DSRecord deleteRecord]
-[DSRecord(ExtendedAttributes) generatedUID]
-[PrinterSharingConfig setPrinterSharingEnabled:]
-[PrinterSharingConfig canSeeNetworkPrinters]
-[PrinterSharingConfig setCanSeeNetworkPrinters:]
-[DSAuthenticator dealloc]
-[DSAuthenticator finalize]
-[DSAuthenticator authenticateUsingAuthorizationSync:]
-[ARDConfig setARDEnabled:]
-[ARDConfig setScreenSharingEnabled:]
-[ARDConfig writeVNCPassword:]
+[SysKeyChainConfig sharedSysKeyChainConfig]
-[SysKeyChainConfig setKeyForDomain:]
-[SysKeyChainConfig storeSystemKeychainPassword:account:service:]
-[SysKeyChainConfig storeKeyInSystemKeychain:forUser:serverURL:description:]
-[SysKeyChainConfig setODSDPassword:accountName:]
-[SysKeyChainConfig overwriteGatekeeperForURL:]
-[SysKeyChainConfig overwriteGatekeeperForURL:withAuthorization:]
-[SysKeyChainConfig resetFDERecoveryPassword:existing:new:]
-[SysKeyChainConfig FDERevertRequiresRestart:]
-[SysKeyChainConfig setRestrictAppInstallations:allowCaspianIdentifiedApps:]
__copyKeyboardTypeForAnyUser
-[User(UserIdentitySupport) isIdentity]
-[User(UserIdentitySupport) identityRef]
-[User(UserIdentitySupport) linkedIdentityName]
-[User(UserIdentitySupport) setLinkedIdentityName:authorization:]
-[User(UserIdentitySupport) linkedIdentityNameDidChangeExternally]
-[User(UserIdentitySupport) userCanChangeLinkedIdentityName]
-[User(UserIdentitySupport) setUserCanChangeLinkedIdentityName:]
-[AdminDirectoryService(Remote) initWithDirectoryServiceAtAddress:name:password:port:]
+[AdminDirectoryService(Remote) directoryServiceAtAddress:name:password:port:]
+[AdminDirectoryService(Remote) dirReferenceForServiceAtAddress:name:password:port:]
-[RemoteUser initWithInfo:node:attributes:]
+[RemoteUser remoteUsersAtAddress:name:password:port:]
-[RemoteUser isAdministrator]
-[RemoteUser isLocal]
+[ParentalControlsConfig sharedConfig]
-[ParentalControlsConfig updateDSAppsForUser:bundleIDs:kickMCX:]
-[ParentalControlsConfig setRemoteListening:]
-[User(CSFDESupport) prvisionForFDEAuthUser:authPassword:]
-[User(UserWC) wcSetNAPrivs:]
+[User(UserPrivate) _isAdministrator:]
-[User(UserPrivate) _setCachedObject:forKey:]
-[User(UserPrivate) _removeCachedAttribute:]
-[User(UserPrivate) _recacheAttribute:]
-[User(UserPrivate) _noneStandardAttribute:]
-[User(UserPrivate) _setNoneStandardAttribute:value:]
-[User(UserPrivate) _setUserCanChange:writersKey:]
-[User(UserPrivate) _setAdministrator:postNotification:]
-[User(UserPrivate) _setDefaults]
-[User(UserPrivate) _postDistributedNotification:]
-[User(UserPrivate) _AOSFrameworkBundle]
___40-[User(UserPrivate) _AOSFrameworkBundle]_block_invoke
-[User(UserPrivate) _authAuthorityDictForString:]
-[User(UserPrivate) _hasAuthAuthority:]
-[User(UserPrivate) _authAuthorityForString:]
-[User(UserPrivate) _removeAuthAuthority:]
GCC_except_table48
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp509
___block_literal_global510
___block_descriptor_tmp580
___block_literal_global581
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp19
___block_literal_global20
___block_descriptor_tmp
___block_literal_global
_debugLoggingEnabled.sDebugLoggingEnabled
+[NetworkTimeClient sharedNetworkTimeClient].sSharedTimeClient
+[NetworkTimeClient sharedNetworkTimeClient].sSharedTimeClientOnce
+[SystemClock sharedSystemClock].gSharedSystemClock
+[SystemClock sharedSystemClock].gSharedSystemClockOnce
+[WebServerConfig sharedWebServerConfig].gSharedWebServerConfig
+[WebServerConfig sharedRemoteAdminServerConfig].gSharedRemoteAdminServerConfig
+[User currentUserCSIdentityRef].sCurrentUserIdentityRef
+[User shouldHide500Users].sShouldHide500Users
+[User shouldHide500Users].sShouldHide500UsersOnce
_sDeletedUsers
+[Group adminGroup].sAdminGroup
+[Group adminGroup].sAdminGroupOnce
+[RemoteAEConfig sharedRemoteAEConfig].gSharedRemoteAEConfig
+[PowerActivityManager sharedPowerActivityManager].gPowerActivityManager
+[InternetServices sharedInternetServices].sSharedInternetServices
-[InternetServices _netFSServerFrameworkBundle].sNetFSServerkBundle
-[InternetServices _netFSServerFrameworkBundle].sNetFSServerkBundleOnce
_gSharedAuthenticator
+[DynamicDNSConfig sharedDynamicDNSConfig].sDynamicDNSConfig
_debugLoggingEnabled.onceToken
_sDefaultLocalNodeSemaphoreOnce
_sDefaultLocalNodeSemaphore
_sDefaultLocalNode
_sProxyNodeCache
_sSearchNode
+[PrinterSharingConfig sharedPrinterSharing].gSharedPrinterSharingConfig
_gSharedDSAuthenticator
+[ARDConfig sharedARDConfig].gSharedARDConfig
+[SysKeyChainConfig sharedSysKeyChainConfig].sSysKeyChainConfig
_writeKeyboardType.sLoginFrameworkBundle
_gProxyServices
+[ParentalControlsConfig sharedConfig].sParentalControlsConfig
+[User(CSFDESupport) isBootVolumeCSFDE].sIsBootVolumeCSFDE
-[User(UserPrivate) _AOSFrameworkBundle].sAOSFrameworkBundle
-[User(UserPrivate) _AOSFrameworkBundle].sAOSFrameworkBundleOnce
_NSAdminDidAuthenticateNotification
_NSAdminDidNotAuthenticateNotification
_NetworkTimeStartedNotification
_NetworkTimeStoppedNotification
_OBJC_CLASS_$_ARDConfig
_OBJC_CLASS_$_Authenticator
_OBJC_CLASS_$_DSAuthenticator
_OBJC_CLASS_$_DSNode
_OBJC_CLASS_$_DSRecord
_OBJC_CLASS_$_DynamicDNSConfig
_OBJC_CLASS_$_Group
_OBJC_CLASS_$_HostConfig
_OBJC_CLASS_$_InternetServices
_OBJC_CLASS_$_NetworkTimeClient
_OBJC_CLASS_$_NetworkTimeServer
_OBJC_CLASS_$_ParentalControlsConfig
_OBJC_CLASS_$_PowerActivityManager
_OBJC_CLASS_$_PrinterSharingConfig
_OBJC_CLASS_$_RemoteAEConfig
_OBJC_CLASS_$_RemoteUser
_OBJC_CLASS_$_SysKeyChainConfig
_OBJC_CLASS_$_SystemClock
_OBJC_CLASS_$_User
_OBJC_CLASS_$_WebServerConfig
_OBJC_IVAR_$_Authenticator._syncWaitDone
_OBJC_IVAR_$_DSNode.mDirectoryService
_OBJC_IVAR_$_DSNode.mNodeName
_OBJC_IVAR_$_DSNode.mNodeReference
_OBJC_IVAR_$_DSNode.mOpenCloseSemaphore
_OBJC_IVAR_$_DSRecord.mNode
_OBJC_IVAR_$_DSRecord.mRecordName
_OBJC_IVAR_$_DSRecord.mRecordReference
_OBJC_IVAR_$_DSRecord.mRecordType
_OBJC_IVAR_$_Group.mGUIDChecked
_OBJC_IVAR_$_Group.mGUIDNumber
_OBJC_IVAR_$_Group.mHasGUID
_OBJC_IVAR_$_Group.mNestedGUIDs
_OBJC_IVAR_$_Group.mRealNameString
_OBJC_IVAR_$_Group.mUUIDString
_OBJC_IVAR_$_Group.mUserGUIDs
_OBJC_IVAR_$_Group.mUsers
_OBJC_IVAR_$_NetworkTimeServer._address
_OBJC_IVAR_$_NetworkTimeServer._descriptiveName
_OBJC_IVAR_$_PowerActivityManager._activePowerProfiles
_OBJC_IVAR_$_PowerActivityManager._ioNotificationPort
_OBJC_IVAR_$_PowerActivityManager._ioNotifier
_OBJC_IVAR_$_PowerActivityManager._powerPreferences
_OBJC_IVAR_$_PowerActivityManager._powerProfiles
_OBJC_IVAR_$_PowerActivityManager._upsShutdownLevels
_OBJC_IVAR_$_User.mCache
_OBJC_IVAR_$_User.mCachedName
_OBJC_IVAR_$_User.mCachedPassword
_OBJC_IVAR_$_User.mIdentityRef
_OBJC_IVAR_$_User.mIsLocal
_OBJC_IVAR_$_User.mModifiedFields
_OBJC_IVAR_$_WebServerConfig._configurationDirectory
_OBJC_METACLASS_$_ARDConfig
_OBJC_METACLASS_$_Authenticator
_OBJC_METACLASS_$_DSAuthenticator
_OBJC_METACLASS_$_DSNode
_OBJC_METACLASS_$_DSRecord
_OBJC_METACLASS_$_DynamicDNSConfig
_OBJC_METACLASS_$_Group
_OBJC_METACLASS_$_HostConfig
_OBJC_METACLASS_$_InternetServices
_OBJC_METACLASS_$_NetworkTimeClient
_OBJC_METACLASS_$_NetworkTimeServer
_OBJC_METACLASS_$_ParentalControlsConfig
_OBJC_METACLASS_$_PowerActivityManager
_OBJC_METACLASS_$_PrinterSharingConfig
_OBJC_METACLASS_$_RemoteAEConfig
_OBJC_METACLASS_$_RemoteUser
_OBJC_METACLASS_$_SysKeyChainConfig
_OBJC_METACLASS_$_SystemClock
_OBJC_METACLASS_$_User
_OBJC_METACLASS_$_WebServerConfig
__ntpdConfFilePath
__ntpdIdentifier
_canOpenAccountsPreferencePane
_copyKeyboardType
_debugLoggingEnabled
_directorySizeAtPath
_directorySizeForFSRef
_fileLogicalSizeAtFSRef
_fileLogicalSizeAtPath
_filePhysicalSizeAtFSRef
_filePhysicalSizeAtPath
_freeSpaceAtPath
_getPIDForProcess
_isBootVolumeHCSFDE
_kickMCXDForUID
_ntpdProcessName
_setSafariLockedSync
_writeKeyboardType
_AuthorizationMakeExternalForm
_CFArrayContainsValue
_CFArrayGetCount
_CFArrayGetTypeID
_CFArrayGetValueAtIndex
_CFBooleanGetTypeID
_CFBooleanGetValue
_CFBundleCreate
_CFBundleGetDataPointerForName
_CFBundleGetFunctionPointerForName
_CFDataGetBytePtr
_CFDataGetLength
_CFDictionaryContainsKey
_CFDictionaryGetTypeID
_CFDictionaryGetValue
_CFGetTypeID
_CFMakeCollectable
_CFPreferencesCopyAppValue
_CFPreferencesCopyValue
_CFPreferencesGetAppBooleanValue
_CFPreferencesSynchronize
_CFPropertyListCreateFromXMLData
_CFPropertyListCreateXMLData
_CFRelease
_CFRetain
_CFRunLoopAddSource
_CFRunLoopGetCurrent
_CFRunLoopSourceInvalidate
_CFStringAppend
_CFStringAppendCString
_CFStringCompare
_CFStringCreateCopy
_CFStringCreateExternalRepresentation
_CFStringCreateMutable
_CFStringCreateMutableCopy
_CFStringCreateWithBytes
_CFStringCreateWithCString
_CFStringCreateWithFormat
_CFStringGetLength
_CFStringGetPascalString
_CFStringTokenizerAdvanceToNextToken
_CFStringTokenizerCopyCurrentTokenAttribute
_CFStringTokenizerCreate
_CFStringTransform
_CFURLCreateFromFileSystemRepresentation
_CFUUIDCreate
_CFUUIDCreateFromString
_CFUUIDCreateString
_CGImageSourceCopyTypeIdentifiers
_CSFDEGetUserEntryForUUID
_CSFDEQueryContext
_CSFDERemovePassphrase
_CSFDEStorePassphrase
_CSGetDefaultIdentityAuthority
_CSGetLocalIdentityAuthority
_CSIdentityGetPosixID
_CSIdentityGetPosixName
_CSIdentityQueryCopyResults
_CSIdentityQueryCreateForCurrentUser
_CSIdentityQueryCreateForUUID
_CSIdentityQueryExecute
_CoreStorageCopyFamilyPropertiesForMount
_FSCloseIterator
_FSGetCatalogInfo
_FSGetCatalogInfoBulk
_FSGetVolumeInfo
_FSOpenIterator
_FSPathMakeRef
_IONotificationPortCreate
_IONotificationPortDestroy
_IONotificationPortGetRunLoopSource
_IOObjectRelease
_IOPMCopyActivePowerProfiles
_IOPMCopyPMPreferences
_IOPMCopyPowerProfiles
_IOPMCopyRepeatingPowerEvents
_IOPMCopyUPSShutdownLevels
_IOPMFeatureIsAvailable
_IOPMSetActivePowerProfiles
_IOPSCopyPowerSourcesInfo
_IOPSPowerSourceSupported
_IORegistryEntryFromPath
_IOServiceAddInterestNotification
_NSCalibratedRGBColorSpace
_NSFileOwnerAccountName
_NSImageCompressionFactor
_NSLog
_NSSearchPathForDirectoriesInDomains
_NSStringFromClass
_NSUserName
_NSZeroRect
_OBJC_CLASS_$_AdminDirectoryService
_OBJC_CLASS_$_NSArray
_OBJC_CLASS_$_NSBitmapImageRep
_OBJC_CLASS_$_NSBundle
_OBJC_CLASS_$_NSCharacterSet
_OBJC_CLASS_$_NSData
_OBJC_CLASS_$_NSDate
_OBJC_CLASS_$_NSDictionary
_OBJC_CLASS_$_NSDistributedNotificationCenter
_OBJC_CLASS_$_NSFileManager
_OBJC_CLASS_$_NSGraphicsContext
_OBJC_CLASS_$_NSImage
_OBJC_CLASS_$_NSMutableArray
_OBJC_CLASS_$_NSMutableData
_OBJC_CLASS_$_NSMutableDictionary
_OBJC_CLASS_$_NSMutableString
_OBJC_CLASS_$_NSNotificationCenter
_OBJC_CLASS_$_NSNumber
_OBJC_CLASS_$_NSObject
_OBJC_CLASS_$_NSPropertyListSerialization
_OBJC_CLASS_$_NSScanner
_OBJC_CLASS_$_NSSet
_OBJC_CLASS_$_NSString
_OBJC_IVAR_$_AdminDirectoryService.mDirReference
_OBJC_METACLASS_$_NSObject
_ODFDEAddUser
_ODFDESynchronizeUsers
_ODNodeCreateWithDSRef
_SMJobIsEnabled
_UTTypeCopyPreferredTagWithClass
__Block_object_assign
__Block_object_dispose
__CSBackToMyMacResetForUser
__NSConcreteGlobalBlock
__NSConcreteStackBlock
__Unwind_Resume
___CFConstantStringClassReference
___objc_personality_v0
___sprintf_chk
___stack_chk_fail
___stack_chk_guard
___user_local_dirname
__dispatch_main_q
__objc_empty_cache
_atoi
_cupsAdminGetServerSettings
_cupsEncryption
_cupsFreeOptions
_cupsGetOption
_cupsLastError
_cupsServer
_dispatch_async
_dispatch_get_global_queue
_dispatch_once
_dispatch_release
_dispatch_semaphore_create
_dispatch_semaphore_signal
_dispatch_semaphore_wait
_dsAddAttribute
_dsAddAttributeValue
_dsAllocAttributeValueEntry
_dsAppendStringToListAlloc
_dsBuildFromPath
_dsBuildListFromStringsAlloc
_dsCloseAttributeList
_dsCloseAttributeValueList
_dsCloseDirNode
_dsCloseRecord
_dsCreateRecord
_dsDataBufferAllocate
_dsDataBufferDeAllocate
_dsDataListDeallocate
_dsDataNodeAllocateBlock
_dsDataNodeAllocateString
_dsDataNodeDeAllocate
_dsDeallocAttributeEntry
_dsDeallocAttributeValueEntry
_dsDeallocRecordEntry
_dsDeleteRecord
_dsDoAttributeValueSearch
_dsDoAttributeValueSearchWithData
_dsDoDirNodeAuth
_dsDoPlugInCustomCall
_dsGetAttributeEntry
_dsGetAttributeValue
_dsGetDirNodeInfo
_dsGetRecordEntry
_dsGetRecordList
_dsOpenDirNode
_dsOpenDirServiceProxy
_dsOpenRecord
_dsReleaseContinueData
_dsRemoveAttribute
_dsRemoveAttributeValue
_dsSetAttributeValue
_dsSetAttributeValues
_dsSetRecordName
_free
_httpClose
_httpConnectEncrypt
_ippPort
_kCFAllocatorDefault
_kCFBooleanTrue
_kCFPreferencesAnyApplication
_kCFPreferencesAnyHost
_kCFPreferencesAnyUser
_kCFPreferencesCurrentHost
_kCFPreferencesCurrentUser
_kCFRunLoopDefaultMode
_kIOMasterPortDefault
_kODRecordTypeUsers
_kSMDomainSystemLaunchd
_kUTTagClassFilenameExtension
_malloc
_mbr_check_membership_ext
_memcpy
_objc_assign_global
_objc_assign_ivar
_objc_assign_strongCast
_objc_enumerationMutation
_objc_msgSend
_objc_msgSendSuper2
_perror
_random
_regcomp
_regexec
_regfree
_srandomdev
_stat$INODE64
_strcmp
_strlen
_strncmp
_sysctl
dyld_stub_binder
