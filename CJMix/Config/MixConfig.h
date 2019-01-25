//
//  MixConfig.h
//  CJMix
//
//  Created by ChenJie on 2019/1/25.
//  Copyright © 2019 Chan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MixConfig : NSObject

+ (instancetype)sharedSingleton;

@property (nonatomic , copy) NSString * mixPrefix;

@property (nonatomic , copy) NSArray <NSString *>* systemPrefixs;

@property (nonatomic , copy) NSArray <NSString *>* shieldPaths;

@property (nonatomic , copy , readonly) NSArray <NSString *>* legalClassFrontSymbols;

@property (nonatomic , copy , readonly) NSArray <NSString *>* legalClassBackSymbols;

@end

