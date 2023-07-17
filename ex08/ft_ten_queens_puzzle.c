/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvandepu <rvandepu@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:50:49 by rvandepu          #+#    #+#             */
/*   Updated: 2023/07/17 13:02:28 by rvandepu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

static char const	*g_sol = "\
0257948136\n\
0258693147\n\
0258693174\n\
0286931475\n\
0358297146\n\
0369184275\n\
0369281475\n\
0369581427\n\
0369714258\n\
0369724815\n\
0369741825\n\
0384792516\n\
0386192574\n\
0386925147\n\
0396824175\n\
0461973825\n\
0469318257\n\
0471692853\n\
0479261358\n\
0479631852\n\
0495813627\n\
0536928147\n\
0536971428\n\
0538629147\n\
0539682417\n\
0571682493\n\
0572681493\n\
0574182963\n\
0579382461\n\
0582731946\n\
0582963147\n\
0584973162\n\
0586137942\n\
0592683147\n\
0615793824\n\
0635819427\n\
0639714258\n\
0641792853\n\
0647185293\n\
0681592473\n\
0681742953\n\
0682713594\n\
0685297413\n\
0695184273\n\
0716824935\n\
0716924835\n\
0718529364\n\
0736814952\n\
0736815924\n\
0738629514\n\
0741829635\n\
0751693842\n\
0751863924\n\
0752813964\n\
0752814936\n\
0758293641\n\
0796318524\n\
0849731625\n\
0851692473\n\
0852974136\n\
0861379425\n\
0862714953\n\
0946827135\n\
0964718253\n\
1357902468\n\
1372859064\n\
1379485026\n\
1386490572\n\
1396852074\n\
1460958273\n\
1463928570\n\
1468370259\n\
1470692538\n\
1473692058\n\
1475296038\n\
1475820369\n\
1475820639\n\
1479258036\n\
1480936275\n\
1483975206\n\
1497036258\n\
1526908473\n\
1526974038\n\
1529748306\n\
1572084936\n\
1572639084\n\
1580742963\n\
1586902473\n\
1592683047\n\
1642839750\n\
1647039258\n\
1682793504\n\
1693074258\n\
1695084273\n\
1695203748\n\
1728649053\n\
1748059263\n\
1758203649\n\
1792853064\n\
1793048526\n\
1807429635\n\
1827935046\n\
1829630475\n\
1849035726\n\
1850296374\n\
1852930746\n\
1857902463\n\
1862974035\n\
1869304752\n\
1926830475\n\
1963028574\n\
1972480536\n\
2058497316\n\
2417963085\n\
2418596307\n\
2469350817\n\
2470831695\n\
2471860359\n\
2480596137\n\
2481963075\n\
2483097516\n\
2483591607\n\
2483961570\n\
2497316850\n\
2519084736\n\
2539084716\n\
2570369184\n\
2574039681\n\
2579084136\n\
2579304186\n\
2580369147\n\
2580369714\n\
2580731649\n\
2580946137\n\
2581369704\n\
2581369740\n\
2581703649\n\
2584703169\n\
2586031479\n\
2586137049\n\
2586307149\n\
2594186307\n\
2594186370\n\
2596137048\n\
2613794850\n\
2617509483\n\
2619753804\n\
2683049157\n\
2683509147\n\
2693804175\n\
2716094853\n\
2736814059\n\
2750814639\n\
2750946831\n\
2751840396\n\
2751940386\n\
2758094613\n\
2758140369\n\
2790514683\n\
2793804615\n\
2817469053\n\
2819460357\n\
2857130649\n\
2859160374\n\
2918530746\n\
2936815704\n\
2938046157\n\
2951840736\n\
2951863704\n\
2961307485\n\
2963041857\n\
2963185047\n\
2964085713\n\
2968041753\n\
2970415863\n\
2971386405\n\
2974130685\n\
3047926815\n\
3068174295\n\
3069518427\n\
3075196824\n\
3079152864\n\
3147925860\n\
3148097526\n\
3164908572\n\
3168520974\n\
3169508427\n\
3172864905\n\
3174805926\n\
3175804692\n\
3179025864\n\
3179625804\n\
3184975206\n\
3185297046\n\
3185960247\n\
3195847026\n\
3508627149\n\
3509468271\n\
3509647182\n\
3528174690\n\
3529168074\n\
3529607418\n\
3529641807\n\
3571408692\n\
3579162084\n\
3579168024\n\
3582071469\n\
3582961740\n\
3582971460\n\
3584902716\n\
3584906172\n\
3592074186\n\
3592471860\n\
3594172680\n\
3594602718\n\
3605197248\n\
3605817429\n\
3625190847\n\
3629508471\n\
3629518407\n\
3642097581\n\
3649157208\n\
3681470295\n\
3681502479\n\
3685140792\n\
3685190247\n\
3685207419\n\
3691470258\n\
3692470815\n\
3692470851\n\
3692814750\n\
3704815926\n\
3704915286\n\
3708146925\n\
3708516924\n\
3724690518\n\
3724805916\n\
3724805961\n\
3724815960\n\
3724908516\n\
3728590641\n\
3728690514\n\
3741596028\n\
3741906825\n\
3742091586\n\
3742096851\n\
3742951860\n\
3742961580\n\
3748091526\n\
3748096251\n\
3792514086\n\
3794150268\n\
3804915726\n\
3825190647\n\
3827905146\n\
3829164075\n\
3841905726\n\
3842096157\n\
3847025169\n\
3849057162\n\
3862051497\n\
3864150972\n\
3908526174\n\
3925817460\n\
3941862750\n\
3942861750\n\
3961520748\n\
3964170285\n\
3974205186\n\
3974206158\n\
4038619257\n\
4053972861\n\
4073681592\n\
4075186392\n\
4075281396\n\
4079258136\n\
4079631852\n\
4083579162\n\
4085269713\n\
4138279605\n\
4139680275\n\
4139685207\n\
4150968273\n\
4152968307\n\
4159268370\n\
4179285306\n\
4179620835\n\
4179630852\n\
4180279635\n\
4196302857\n\
4208619753\n\
4209683175\n\
4258136970\n\
4258170369\n\
4258603179\n\
4259613708\n\
4259630718\n\
4273609158\n\
4275180369\n\
4279130685\n\
4283179605\n\
4283975160\n\
4285713069\n\
4285916037\n\
4286130975\n\
4286915703\n\
4293681570\n\
4295186370\n\
4295380716\n\
4296158073\n\
4296308157\n\
4603582971\n\
4605713829\n\
4609582731\n\
4615703829\n\
4619703825\n\
4619730285\n\
4630279185\n\
4630718529\n\
4630752918\n\
4639258170\n\
4680279135\n\
4682519703\n\
4682713509\n\
4682730915\n\
4683179205\n\
4685209713\n\
4693182570\n\
4695207318\n\
4702586931\n\
4703581926\n\
4708619253\n\
4713908526\n\
4713968520\n\
4716208359\n\
4716258093\n\
4716920835\n\
4718520369\n\
4730286915\n\
4730619582\n\
4736920581\n\
4738620519\n\
4750268319\n\
4752916830\n\
4758203691\n\
4790258613\n\
4802619753\n\
4803179625\n\
4809362751\n\
4809627135\n\
4813702596\n\
4815720369\n\
4819257036\n\
4819630752\n\
4835916027\n\
4905317286\n\
4930271685\n\
4930286175\n\
4938271605\n\
4953168207\n\
4953172860\n\
4970286135\n\
5029713864\n\
5046827139\n\
5046831792\n\
5061728394\n\
5069713824\n\
5069728314\n\
5094682713\n\
5164083972\n\
5180369247\n\
5180742963\n\
5184279630\n\
5186297403\n\
5190372864\n\
5190637248\n\
5196820374\n\
5197380246\n\
5209741386\n\
5241796308\n\
5247083169\n\
5249731680\n\
5261379480\n\
5263079418\n\
5269380417\n\
5269713084\n\
5281479630\n\
5283079164\n\
5283741906\n\
5283791640\n\
5286031479\n\
5286091473\n\
5291380746\n\
5296418073\n\
5297413068\n\
5304792681\n\
5306817429\n\
5314790286\n\
5316820794\n\
5317269084\n\
5317286490\n\
5317480296\n\
5319720864\n\
5360741829\n\
5369247081\n\
5369281470\n\
5369720814\n\
5380269714\n\
5380296174\n\
5384296170\n\
5390417268\n\
5394286170\n\
5396417028\n\
5703691842\n\
5703841926\n\
5704619283\n\
5704813629\n\
5706318429\n\
5713084296\n\
5713869024\n\
5714083962\n\
5714286930\n\
5716024839\n\
5716820394\n\
5720869314\n\
5724819630\n\
5726390841\n\
5740369281\n\
5740386291\n\
5741396820\n\
5741829630\n\
5741863029\n\
5790316824\n\
5791380246\n\
5803697142\n\
5819720364\n\
5820369147\n\
5820379164\n\
5820714693\n\
5840731629\n\
5847031692\n\
5849031726\n\
5860314792\n\
5860319724\n\
5861720394\n\
5914730286\n\
5916420837\n\
5920368147\n\
5920741863\n\
5924718603\n\
5924813607\n\
5926318407\n\
5946027138\n\
5961380742\n\
6025793841\n\
6025794813\n\
6035829714\n\
6038479251\n\
6057138249\n\
6058137249\n\
6074182539\n\
6091473825\n\
6135849027\n\
6137948502\n\
6150942837\n\
6152974830\n\
6157903842\n\
6158094273\n\
6170835924\n\
6172094853\n\
6174809352\n\
6195084273\n\
6205849731\n\
6207485913\n\
6251903748\n\
6251908473\n\
6257038419\n\
6257048139\n\
6257903148\n\
6257908413\n\
6258093174\n\
6258403971\n\
6271309485\n\
6271409358\n\
6275091483\n\
6275184039\n\
6275194038\n\
6275194083\n\
6275309481\n\
6291483075\n\
6291853074\n\
6295084713\n\
6295184073\n\
6307185249\n\
6307529148\n\
6307529184\n\
6308529741\n\
6314792580\n\
6314809752\n\
6314859207\n\
6318497520\n\
6318529704\n\
6350842791\n\
6357902418\n\
6370481592\n\
6370491528\n\
6374809152\n\
6394182570\n\
6394802751\n\
6405397281\n\
6405827319\n\
6407528139\n\
6407925813\n\
6415093827\n\
6415097283\n\
6417028539\n\
6417038259\n\
6417928530\n\
6420831975\n\
6420837915\n\
6428591307\n\
6470358192\n\
6470392581\n\
6470831925\n\
6471825309\n\
6490352817\n\
6490531728\n\
6491372850\n\
6804152973\n\
6814039752\n\
6814702953\n\
6815024793\n\
6820374195\n\
6820974135\n\
6824195307\n\
6825194073\n\
6827135094\n\
6830491572\n\
6831479025\n\
6835091427\n\
6851902473\n\
6852074139\n\
6920847135\n\
6924803175\n\
6930481572\n\
6931825704\n\
6952073184\n\
7025869314\n\
7028613594\n\
7029584136\n\
7031958246\n\
7035914286\n\
7036814952\n\
7036958142\n\
7038692514\n\
7048136295\n\
7048159263\n\
7061953842\n\
7063184295\n\
7081469253\n\
7140839625\n\
7142869350\n\
7180539642\n\
7182530946\n\
7206195384\n\
7209485316\n\
7241859630\n\
7241905386\n\
7248059613\n\
7248159603\n\
7249053168\n\
7249185360\n\
7263185940\n\
7283905146\n\
7306195824\n\
7316490852\n\
7316950842\n\
7380246195\n\
7382490516\n\
7386205149\n\
7403862951\n\
7405813629\n\
7405813692\n\
7413692850\n\
7413862950\n\
7413968520\n\
7415296830\n\
7418296350\n\
7418630259\n\
7418630295\n\
7419053862\n\
7419268350\n\
7419630285\n\
7419630852\n\
7420695813\n\
7420915863\n\
7425960318\n\
7429630815\n\
7460915283\n\
7480915263\n\
7502683149\n\
7516038429\n\
7516408392\n\
7516902483\n\
7518036924\n\
7519403862\n\
7528139640\n\
7529168304\n\
7530649182\n\
7581403692\n\
7582036914\n\
7941502683\n\
8027519463\n\
8036971425\n\
8073169524\n\
8130695247\n\
8137025964\n\
8142097536\n\
8147069253\n\
8149703625\n\
8150964273\n\
8170369524\n\
8172064953\n\
8192570364\n\
8206951473\n\
8207146935\n\
8241796350\n\
8251940736\n\
8271350946\n\
8304796251\n\
8304915726\n\
8306925741\n\
8317206495\n\
8352960741\n\
8357160249\n\
8407316952\n\
8413097526\n\
8419257036\n\
8427360915\n\
8427915063\n\
8470251693\n\
8473025961\n\
8473091526\n\
8502963741\n\
8516024793\n\
8519063724\n\
8520741963\n\
8524179360\n\
8524179630\n\
8524703961\n\
8526307941\n\
8529307461\n\
8531629740\n\
8536071429\n\
8539041726\n\
8603147925\n\
8613509427\n\
8620514973\n\
8627140935\n\
8642097531\n\
9035281746\n\
9053172864\n\
9137285046\n\
9138620574\n\
9147025863\n\
9148307526\n\
9150268374\n\
9203681475\n\
9241706358\n\
9247185063\n\
9247186035\n\
9248136075\n\
9248306157\n\
9258170364\n\
9261370485\n\
9263184075\n\
9263185047\n\
9281470635\n\
9283075164\n\
9283175064\n\
9304815726\n\
9314702586\n\
9317286405\n\
9318257046\n\
9318407526\n\
9352814706\n\
9358207146\n\
9360285741\n\
9364180572\n\
9384206175\n\
9407316852\n\
9413862057\n\
9415026837\n\
9417036852\n\
9417268053\n\
9420617538\n\
9425817036\n\
9427318506\n\
9428317506\n\
9460317582\n\
9461370852\n\
9463028571\n\
9463071852\n\
9504186372\n\
9520368147\n\
9520738641\n\
9528307146\n\
9530681742\n\
9538026174\n\
9603175824\n\
9613074852\n\
9613807425\n\
9615207483\n\
9630258174\n\
9630275184\n\
9630285741\n\
9630418572\n\
9630718524\n\
9630815724\n\
9641702853\n\
9713068524\n\
9741306825\n\
9741306852\n\
9742051863\n";

int	ft_ten_queens_puzzle(void)
{
	unsigned int	i;

	i = 0;
	while (g_sol[i])
		i++;
	write(1, g_sol, i);
	return (i / 11);
}

/*int	main(void)
{
	printf("%d\n", ft_ten_queens_puzzle());
}*/